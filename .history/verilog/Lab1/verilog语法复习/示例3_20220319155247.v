module shifter
	#(parameter N = 8,
	  RST_VALUE = {N{1'b0}})
	(
	input clk, rst, pe, se, si, 
	input [N-1:0] d,
	output reg [N-1:0] q
);
	always @(posedge clk, posedge rst) 
	begin
		if(rst)
			q <= RST_VALUE;
		else if(pe)
			q <= d;
		else if(se) 
			q <= {si, q[N-1:1]};
	end

endmodule