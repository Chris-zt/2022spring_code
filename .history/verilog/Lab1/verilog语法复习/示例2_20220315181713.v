module register (
	input rst, clk, en,
	input [31:0] d,
	output reg [31:0] q
);
	always @(posedge clk or posedge rst) 
	begin
		if(rst)
			q <= 32'h0000;
		else
			if(en)
				q <= d;	
	end
	
endmodule