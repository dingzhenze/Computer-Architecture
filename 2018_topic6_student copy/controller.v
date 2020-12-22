`include "define.vh"


/**
 * Controller for MIPS 5-stage pipelined CPU.
 * Author: Zhao, Hongyu  <power_zhy@foxmail.com>
 */
module controller (/*AUTOARG*/
	input wire clk,  // main clock
	input wire rst,  // synchronous reset
	// debug
	`ifdef DEBUG
	input wire debug_en,  // debug enable
	input wire debug_step,  // debug step clock
	`endif
	// instruction decode
	input wire [31:0] inst,  // instruction
	input wire is_branch_exe,  // whether instruction in EXE stage is jump/branch instruction
	input wire [4:0] regw_addr_exe,  // register write address from EXE stage
	input wire wb_wen_exe,  // register write enable signal feedback from EXE stage
	input wire is_branch_mem,  // whether instruction in MEM stage is jump/branch instruction
	input wire [4:0] regw_addr_mem,  // register write address from MEM stage
	input wire wb_wen_mem,  // register write enable signal feedback from MEM stage
	output reg [2:0] pc_src,  // how would PC change to next
	output reg imm_ext,  // whether using sign extended to immediate data
	output reg [1:0] exe_a_src,  // data source of operand A for ALU
	output reg [1:0] exe_b_src,  // data source of operand B for ALU
	output reg [3:0] exe_alu_oper,  // ALU operation type
	output reg mem_ren,  // memory read enable signal
	output reg mem_wen,  // memory write enable signal
	output reg [1:0] wb_addr_src,  // address source to write data back to registers
	output reg wb_data_src,  // data source of data being written back to registers
	output reg wb_wen,  // register write enable signal
	output reg unrecognized,  // whether current instruction can not be recognized
	output reg sign,  // signed or not
	// pipeline control
	output reg if_rst,  // stage reset signal
	output reg if_en,  // stage enable signal
	input wire if_valid,  // stage valid flag
	output reg id_rst,
	output reg id_en,
	input wire id_valid,
	output reg exe_rst,
	output reg exe_en,
	input wire exe_valid,
	output reg mem_rst,
	output reg mem_en,
	input wire mem_valid,
	output reg wb_rst,
	output reg wb_en,
	input wire wb_valid,
	// forwarding
	input wire mem_ren_mem,
	input wire mem_ren_exe,
	input wire wb_wen_wb,
	input wire rs_rt_equal,
	input wire [4:0] regw_addr_wb,
	output reg mem_fwd_m,
	output reg [1:0] exe_fwd_a_ctrl,
	output reg [1:0] exe_fwd_b_ctrl,
	// exceptions
	input wire jump_en, //epc_ctrl
	output reg [1:0] cp_oper
	);
	
	`include "mips_define.vh"
	
	// instruction decode
	reg rs_used, rt_used, is_store,is_load;
	wire is_load_exe;
	assign is_load_exe= mem_ren_exe;

	always @(*) begin
		pc_src = PC_NEXT;
		imm_ext = 0;
		exe_a_src = EXE_A_RS;
		exe_b_src = EXE_B_RT;
		exe_alu_oper = EXE_ALU_ADD;
		mem_ren = 0;
		mem_wen = 0;
		wb_addr_src = WB_ADDR_RD;
		wb_data_src = WB_DATA_ALU;
		wb_wen = 0;
		rs_used = 0;
		rt_used = 0;
		sign = 0;
		unrecognized = 0;
		is_load = 0;
		is_store = 0;
		cp_oper = 0;
		case (inst[31:26])
			INST_R: begin
				case (inst[5:0])
					R_FUNC_JR: begin
						pc_src = PC_JR;
						rs_used = 1;
					end
					R_FUNC_ADD: begin
						exe_alu_oper = EXE_ALU_ADD;
						wb_addr_src = WB_ADDR_RD;
						wb_data_src = WB_DATA_ALU;
						wb_wen = 1;
						rs_used = 1;
						rt_used = 1;
					end
					R_FUNC_ADDU: begin
						exe_alu_oper = EXE_ALU_ADD;
						wb_addr_src = WB_ADDR_RD;
						wb_data_src = WB_DATA_ALU;
						wb_wen = 1;
						rs_used = 1;
						rt_used = 1;
					end
					R_FUNC_SUB: begin
						exe_alu_oper = EXE_ALU_SUB;
						wb_addr_src = WB_ADDR_RD;
						wb_data_src = WB_DATA_ALU;
						wb_wen = 1;
						rs_used = 1;
						rt_used = 1;
					end
					R_FUNC_SUBU: begin
						exe_alu_oper = EXE_ALU_SUB;
						wb_addr_src = WB_ADDR_RD;
						wb_data_src = WB_DATA_ALU;
						wb_wen = 1;
						rs_used = 1;
						rt_used = 1;
					end
					R_FUNC_AND: begin
						exe_alu_oper = EXE_ALU_AND;
						wb_addr_src = WB_ADDR_RD;
						wb_data_src = WB_DATA_ALU;
						wb_wen = 1;
						rs_used = 1;
						rt_used = 1;
					end
					R_FUNC_OR: begin
						exe_alu_oper = EXE_ALU_OR;
						wb_addr_src = WB_ADDR_RD;
						wb_data_src = WB_DATA_ALU;
						wb_wen = 1;
						rs_used = 1;
						rt_used = 1;
					end
					R_FUNC_XOR: begin
						exe_alu_oper = EXE_ALU_XOR;
						wb_addr_src = WB_ADDR_RD;
						wb_data_src = WB_DATA_ALU;
						wb_wen = 1;
						rs_used = 1;
						rt_used = 1;
					end
					R_FUNC_NOR: begin
						exe_alu_oper = EXE_ALU_NOR;
						wb_addr_src = WB_ADDR_RD;
						wb_data_src = WB_DATA_ALU;
						wb_wen = 1;
						rs_used = 1;
						rt_used = 1;
					end
					R_FUNC_SLT: begin
						exe_alu_oper = EXE_ALU_SLT;
						wb_addr_src = WB_ADDR_RD;
						wb_data_src = WB_DATA_ALU;
						sign = 1;
						wb_wen = 1;
						rs_used = 1;
						rt_used = 1;
					end
					R_FUNC_SLTU: begin
						exe_alu_oper = EXE_ALU_SLT;
						wb_addr_src = WB_ADDR_RD;
						wb_data_src = WB_DATA_ALU;
						wb_wen = 1;
						rs_used = 1;
						rt_used = 1;
					end
					R_FUNC_SLL: begin
						exe_alu_oper = EXE_ALU_SL;
						wb_addr_src = WB_ADDR_RD;
						wb_data_src = WB_DATA_ALU;
						exe_a_src = EXE_A_SA;
						wb_wen = 1;
						rt_used = 1;
					end
					R_FUNC_SRL: begin
						exe_alu_oper = EXE_ALU_SR;
						wb_addr_src = WB_ADDR_RD;
						wb_data_src = WB_DATA_ALU;
						exe_a_src = EXE_A_SA;
						wb_wen = 1;
						rt_used = 1;
					end
					R_FUNC_SRA: begin
						exe_alu_oper = EXE_ALU_SR;
						wb_addr_src = WB_ADDR_RD;
						wb_data_src = WB_DATA_ALU;
						exe_a_src = EXE_A_SA;
						sign = 1;
						wb_wen = 1;
						rt_used = 1;
					end
					R_FUNC_SLLV: begin
						exe_alu_oper = EXE_ALU_SL;
						wb_addr_src = WB_ADDR_RD;
						wb_data_src = WB_DATA_ALU;
						wb_wen = 1;
						rs_used = 1;
						rt_used = 1;
					end
					R_FUNC_SRLV: begin
						exe_alu_oper = EXE_ALU_SR;
						wb_addr_src = WB_ADDR_RD;
						wb_data_src = WB_DATA_ALU;
						wb_wen = 1;
						rs_used = 1;
						rt_used = 1;
					end
					R_FUNC_SRAV: begin
						exe_alu_oper = EXE_ALU_SR;
						wb_addr_src = WB_ADDR_RD;
						wb_data_src = WB_DATA_ALU;
						sign = 1;
						wb_wen = 1;
						rs_used = 1;
						rt_used = 1;
					end
					default: begin
						unrecognized = 1;
					end
				endcase
			end
			INST_J: begin
				pc_src = PC_JUMP;
			end
			INST_JAL: begin
				pc_src = PC_JUMP;
				exe_a_src = EXE_A_LINK;
				exe_b_src = EXE_B_LINK;
				exe_alu_oper = EXE_ALU_ADD;
				wb_addr_src = WB_ADDR_LINK;
				wb_data_src = WB_DATA_ALU;
				wb_wen = 1;
			end
			INST_BEQ: begin
				pc_src = PC_BEQ;
				exe_a_src = EXE_A_RS;
				exe_b_src = EXE_B_RT ;
				exe_alu_oper = EXE_ALU_ADD;
				imm_ext = 1;
				rs_used = 1;
				rt_used = 1;
			end
			INST_BNE: begin
				pc_src = PC_BNE;
				exe_a_src = EXE_A_RS;
				exe_b_src = EXE_B_RT ;
				exe_alu_oper = EXE_ALU_ADD;
				imm_ext = 1;
				rs_used = 1;
				rt_used = 1;
			end
			INST_ADDI: begin
				imm_ext = 1;
				exe_b_src = EXE_B_IMM;
				exe_alu_oper = EXE_ALU_ADD;
				wb_addr_src = WB_ADDR_RT;
				wb_data_src = WB_DATA_ALU;
				wb_wen = 1;
				rs_used = 1;
			end
			INST_ADDIU: begin
				imm_ext = 1;
				exe_b_src = EXE_B_IMM;
				exe_alu_oper = EXE_ALU_ADD;
				wb_addr_src = WB_ADDR_RT;
				wb_data_src = WB_DATA_ALU;
				wb_wen = 1;
				rs_used = 1;
			end
			INST_ANDI: begin
				imm_ext = 0;
				exe_b_src = EXE_B_IMM;
				exe_alu_oper = EXE_ALU_AND;
				wb_addr_src = WB_ADDR_RT;
				wb_data_src = WB_DATA_ALU;
				wb_wen = 1;
				rs_used = 1;
			end
			INST_ORI: begin
				imm_ext = 0;
				exe_b_src = EXE_B_IMM;
				exe_alu_oper = EXE_ALU_OR;
				wb_addr_src = WB_ADDR_RT;
				wb_data_src = WB_DATA_ALU;
				wb_wen = 1;
				rs_used = 1;
			end
			INST_XORI: begin
				imm_ext = 0;
				exe_b_src = EXE_B_IMM;
				exe_alu_oper = EXE_ALU_XOR;
				wb_addr_src = WB_ADDR_RT;
				wb_data_src = WB_DATA_ALU;
				wb_wen = 1;
				rs_used = 1;
			end
			INST_LUI: begin
				exe_b_src = EXE_B_IMM;
				exe_alu_oper = EXE_ALU_LUI;
				wb_addr_src = WB_ADDR_RT;
				wb_data_src = WB_DATA_ALU;
				wb_wen = 1;
				rs_used = 0;
			end
			INST_LW: begin
				imm_ext = 1;
				exe_b_src = EXE_B_IMM;
				exe_alu_oper = EXE_ALU_ADD;
				mem_ren = 1;
				wb_addr_src = WB_ADDR_RT;
				wb_data_src = WB_DATA_MEM;
				wb_wen = 1;
				rs_used = 1;
				is_load = 1;
			end
			INST_SW: begin
				imm_ext = 1;
				exe_b_src = EXE_B_IMM;
				exe_alu_oper = EXE_ALU_ADD;
				mem_wen = 1;
				rs_used = 1;
				rt_used = 1;
				is_store = 1;
			end
			INST_SLTI: begin
				imm_ext = 1;
				exe_b_src = EXE_B_IMM;
				exe_alu_oper = EXE_ALU_SLT;
				wb_addr_src = WB_ADDR_RT;
				wb_data_src = WB_DATA_ALU;
				wb_wen = 1;
				rs_used = 1;
			end
			INST_SLTIU: begin
				imm_ext = 0;
				exe_b_src = EXE_B_IMM;
				exe_alu_oper = EXE_ALU_SLT;
				wb_addr_src = WB_ADDR_RT;
				wb_data_src = WB_DATA_ALU;
				wb_wen = 1;
				rs_used = 1;
			end
			INST_CP0: begin
				case(inst[25])
					1: begin
						case(inst[5:0])
							CP0_CO_ERET: begin
								cp_oper=EXE_CP0_ERET;
							end
							default: begin 
								unrecognized = 1;
							end
						endcase
					end
					0: begin
						case(inst[24:21])
							CP_FUNC_MF: begin
								exe_a_src = EXE_A_INT; //from CPR
								exe_b_src = EXE_B_INT; //0
								exe_alu_oper = EXE_ALU_ADD;
								wb_addr_src = WB_ADDR_RT; //GPR[rt]=CPR[rd]
								wb_data_src = WB_DATA_ALU;
								wb_wen = 1;
							end
							CP_FUNC_MT: begin
								cp_oper = EXE_CP_STORE;
								rt_used = 1;
							end
						endcase
					end
				endcase
			end
			default: begin
				unrecognized = 1;
			end
		endcase
	end

	wire [4:0] addr_rs;
	wire [4:0] addr_rt;
	assign
		addr_rs = inst[25:21],
		addr_rt = inst[20:16];

	// pipeline control
	reg load_stall;

	always @(*) begin
		load_stall = 0;
		if(rs_used && regw_addr_exe == addr_rs && wb_wen_exe && is_load_exe)begin
			load_stall = 1;
		end
		if(rt_used && regw_addr_exe == addr_rt && wb_wen_exe && is_load_exe &&~is_store)begin
			load_stall = 1;
		end
	end

	always @(*) begin
		mem_fwd_m = 0;
		if(rt_used && regw_addr_exe == addr_rt && wb_wen_exe && is_load_exe && is_store)begin
			mem_fwd_m = 1;
		end
	end

	always @(*) begin
		exe_fwd_a_ctrl = FROM_REG;
		exe_fwd_b_ctrl = FROM_REG;
		if (wb_wen_exe && regw_addr_exe != 0 ) begin
			if(rs_used && regw_addr_exe == addr_rs)
				exe_fwd_a_ctrl = FROM_EXE_ALUOUT;
			if(rt_used && regw_addr_exe == addr_rt)
				exe_fwd_b_ctrl = FROM_EXE_ALUOUT;
		end 
		// after lw stall
		if(regw_addr_mem != 0 && mem_ren_mem && wb_wen_mem)begin
			if(rs_used && (regw_addr_mem == addr_rs) )
				exe_fwd_a_ctrl = FROM_MEM_DM;
			if(rt_used && (regw_addr_mem == addr_rt) )
				exe_fwd_b_ctrl = FROM_MEM_DM;
		end

		if(wb_wen_mem && regw_addr_mem != 0 && !mem_ren_mem) begin
			if(rs_used && regw_addr_exe != addr_rs && regw_addr_mem == addr_rs) 
				exe_fwd_a_ctrl = FROM_MEM_ALUOUT;
			if(rt_used && regw_addr_exe != addr_rt && regw_addr_mem == addr_rt)
				exe_fwd_b_ctrl = FROM_MEM_ALUOUT;
		end
	end	
	// 	reg_stall = 0;
	// 	exe_fwd_a_ctrl = FROM_REG;
	// 	exe_fwd_b_ctrl = FROM_REG;
	// 	if (wb_wen_mem && regw_addr_mem != 0) begin
	// 		// after LW stall one cycle
	// 		if (mem_ren_mem && (regw_addr_mem == addr_rs_exe || regw_addr_mem == addr_rt_exe)) begin
	// 			reg_stall = 1;
	// 		end
	// 		// from ALU result
	// 		else begin
	// 			if (regw_addr_mem == addr_rs_exe) begin
	// 				exe_fwd_a_ctrl = FROM_EXMEM_ALUOUT;
	// 			end
	// 			if (regw_addr_mem == addr_rt_exe) begin
	// 				exe_fwd_b_ctrl = FROM_EXMEM_ALUOUT;
	// 			end
	// 		end
	// 	end
	// 	else if (wb_wen_wb && regw_addr_wb != 0) begin
	// 		// already stall one cycle
	// 		if (mem_ren_mem) begin
	// 			if (regw_addr_wb == addr_rs_exe) begin
	// 				exe_fwd_a_ctrl = FROM_MEMWB_DM;
	// 			end
	// 			if (regw_addr_wb == addr_rt_exe) begin
	// 				exe_fwd_b_ctrl = FROM_MEMWB_DM;
	// 			end
	// 		end
	// 		// from ALU result 2 cycles ago
	// 		else begin
	// 			if (regw_addr_mem != addr_rs_exe && regw_addr_wb == addr_rs_exe) begin
	// 				exe_fwd_a_ctrl = FROM_MEMWB_ALUOUT;
	// 			end
	// 			if (regw_addr_mem != addr_rt_exe && regw_addr_wb == addr_rt_exe) begin
	// 				exe_fwd_b_ctrl = FROM_MEMWB_ALUOUT;
	// 			end
	// 		end
	// 	end
	// end

	
	`ifdef DEBUG
	reg debug_step_prev;
	
	always @(posedge clk) begin
		debug_step_prev <= debug_step;
	end
	`endif
	
	always @(*) begin
		if_rst = 0;
		if_en = 1;
		id_rst = 0;
		id_en = 1;
		exe_rst = 0;
		exe_en = 1;
		mem_rst = 0;
		mem_en = 1;
		wb_rst = 0;
		wb_en = 1;
		if (rst) begin
			if_rst = 1;
			id_rst = 1;
			exe_rst = 1;
			mem_rst = 1;
			wb_rst = 1;
		end
		`ifdef DEBUG
		// suspend and step execution
		else if ((debug_en) && ~(~debug_step_prev && debug_step)) begin
			if_en = 0;
			id_en = 0;
			exe_en = 0;
			mem_en = 0;
			wb_en = 0;
		end
		`endif
		// // this stall indicate that ID is waiting for previous instruction, should insert NOPs between ID and EXE.
		// else if (reg_stall) begin
		// 	if_en = 0;
		// 	id_en = 0;
		// 	exe_rst = 1;
		// end
		// // this stall indicate that a jump/branch instruction is running, so that 3 NOP should be inserted between IF and ID
		// else if (branch_stall) begin
		// 	id_rst = 1;
		// end
		else if (load_stall) begin
			if_en = 0;
			id_en = 0;
			exe_rst = 1;
		end
		else if (jump_en)begin
			id_rst = 1;
		end
	end
	
endmodule
