`include "define.vh"


module cp0 (
	input wire clk,  // main clock
	// debug
	// `ifdef DEBUG
	// input wire [4:0] debug_addr,  // debug address
	// output reg [31:0] debug_data,  // debug data
	// `endif
	// operations (read in ID stage and write in EXE stage)
	input wire [1:0] oper,  // CP0 operation type
	input wire [4:0] addr_r,  // read address
	output wire [31:0] data_r,  // read data
	input wire [4:0] addr_w,  // write address
	input wire [31:0] data_w,  // write data
	// exceptions (check exceptions in MEM stage)
	input wire rst,  // synchronous reset
	input wire if_rst,
	input wire ir_en,  // interrupt enable 现在是否应该去响应中�
	input wire ir_in,  // external interrupt input 一个按�
	input wire [31:0] ret_addr,  // target instruction address to store when interrupt occurred 
	output reg jump_en,  // force jump enable signal when interrupt authorised or ERET occurred
	output reg [31:0] jump_addr, // target instruction address to jump to
	input wire if_en
	);
	
	`include "mips_define.vh"
	// interrupt determination
	
	// interrupt
	reg ir_prev;
	always @(posedge clk) begin
		ir_prev <= ir_in;
	end
	wire ir_in_c;
	assign ir_in_c = ~ir_prev & ir_in;

	wire ir;
	wire eret;
	assign eret = (oper == EXE_CP0_ERET);
	reg ir_wait = 0, ir_valid = 1;
	always @(posedge clk) begin
		if (rst)
			ir_wait <= 0;
		else if (ir_in_c)
			ir_wait <= 1;
		else if (eret)
			ir_wait <= 0;
	end
	always @(posedge clk) begin
		if (rst)
			ir_valid <= 1;
		else if (eret) //没有在中断函数里，可以处理中断了
			ir_valid <= 1;
		else if (ir)
			ir_valid <= 0;  // prevent exception reenter
	end
	assign ir = ir_en & ir_wait & ir_valid;

	// Exception Handler Base Register

	reg [31:0] regs [0:31];

	assign data_r = regs[addr_r];


	// Exception Program Counter Register

	// jump determination
	always @(posedge clk)begin
		// jump_en = 0;
		// jump_addr = 0;
		// if (rst) begin
        //     jump_addr = 0;
        //     jump_en = 0;
		if (if_rst) begin
            jump_addr = 0;
            jump_en = 0;
        end else begin
			if (if_en) begin
				jump_en = 0;
				jump_addr = 0;
			end
            if (oper == EXE_CP0_ERET) begin //eret
                jump_addr = regs[CP0_EPCR];
                jump_en = 1;
            end else if (oper == EXE_CP_STORE) begin
                regs[addr_w] = data_w;
            end else if (ir) begin //external interrupt
                jump_addr = regs[CP0_EHBR];
                jump_en = 1;
			end
            // end else if (if_en) begin
			// 	jump_en = 0;
			// 	jump_addr = 0;
			// end
        end 
		if(ir)                 
			regs[CP0_EPCR] = ret_addr;

		if (rst)
			regs[CP0_TCR] = 0;
		else
			regs[CP0_TCR] = regs[CP0_TCR] + 1;
	end

endmodule
