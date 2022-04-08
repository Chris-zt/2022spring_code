module Adder (
	input [3:0] In, [15:0] Out,
	output add
);
	wire [15:0] temp;

	assign temp = {12'b000000000000, In};
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