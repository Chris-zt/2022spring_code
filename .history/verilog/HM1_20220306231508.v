module Adder (
	input [3:0] Ln, [15:0] Out,
	output add
);
	wire [15:0] temp;

	assign temp[3:0] = Ln;
	assign add = temp + Out;
endmodule

module Register (
	input [15:0] add,
	input [15:0] LOAD,
	input clk, Rst, Load,
	output [15:0] Out
);
	always @(posedge ) begin
		
	end

endmodule