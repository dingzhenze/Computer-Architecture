module inst_rom (
	input wire clk,
	input wire rst,
	input wire cs,  // choosed
	input wire [31:0] addr,
	output reg [31:0] dout,
	output wire rom_stall
	);
	
	parameter
		ADDR_WIDTH = 6;
	
	reg [31:0] data [0:(1<<ADDR_WIDTH)-1];
	
	initial	begin
		$readmemh("inst_mem.hex", data);
	end
	
	reg ack;
	reg [3:0] counter;
	reg [31:0] addr_previous;
	reg [31:0] out;

	always @(negedge clk) begin
		// out <= data[addr[ADDR_WIDTH-1:0]];
		if (rst) begin
			counter = 0;
			ack = 0;
		end else begin
			if (addr_previous == addr) begin
				counter = counter + 1;
				if (counter == 7) begin
					out <= data[addr[ADDR_WIDTH-1:0]];
					ack = 1;
				end
			end else begin
				counter = 0;
				ack = 0;
			end
			addr_previous = addr;
		end
	end

	assign
		rom_stall = cs & ~ack;
	
	always @(*) begin
		if (addr[31:ADDR_WIDTH] != 0)
			dout = 32'h0;
		else
			dout = out;
	end
	
endmodule
