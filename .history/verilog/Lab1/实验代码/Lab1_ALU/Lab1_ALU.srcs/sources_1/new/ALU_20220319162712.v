`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/03/19 16:14:19
// Design Name: 
// Module Name: ALU
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module ALU #(parameter WIDTH = 32)
(
    input [WIDTH-1:0] a, b,
    input[2:0] f,
    output reg [WIDTH-1:0] y, 
    output z 
);

    always @(*) begin
        case (f)
            3'o0: 
            3'o1: 
            3'o2: 
            3'o3: 
            3'o4: 
            3'o0: 
            3'o0: 
            default: 
        endcase
    end
endmodule
