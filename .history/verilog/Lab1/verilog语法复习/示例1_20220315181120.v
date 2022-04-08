module mux2 (
	output[31:0] y,
	input [31:0] a, b,
	input s
);
	assign y = s ? b : a;
	
endmodule



