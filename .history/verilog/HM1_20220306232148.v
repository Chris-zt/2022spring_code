module Adder (
	input [3:0] Ln, [15:0] Out,
	output add
);
	wire [15:0] temp;

	initial begin
		temp = 16'h00;
	end

	assign temp[3:0] = Ln;
	assign add = temp + Out;
endmodule

module Register (
	input [15:0] add,
	input [15:0] LOAD,
	input clk, Rst, Load,
	output reg [15:0] Out
);
	always @(posedge clk or deposedge Rst) 
	begin
		if(Rst)
			Out = 16'h00;
		else if
			Out = add;
	end

endmodule