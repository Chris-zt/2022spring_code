`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/03/19 16:38:30
// Design Name: 
// Module Name: ALU_sim
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


module ALU_sim();
    reg [31:0] y;
    reg z;
    reg [31:0] a, b;
    wire [2:0] f;

    ALU ALU(a, b, f, y, z);

    initial 
    begin
        a = 10; b = 5;  
    end



endmodule
