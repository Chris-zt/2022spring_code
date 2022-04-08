module counter 
	#(parameter N = 8,
	RST_VALUE = {N{1'b1}})
	(input clk, rst, pe, ce,
	input [N-1:0] d,
	output reg [N-1:0] q
	);
	always @(posedge clk, posedge rst) 
	begin
		if(rst)
			q <= RST_VALUE;
		else if(pe) 
			q <= d;
		else if(ce)
			q <= q - 1;
	end
	
endmodule