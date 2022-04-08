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
    reg [2:0] f;

    ALU_6bits ALU_6bits(a, b, f, y, z);

    initial 
    begin
        a = 10; b = 5;  f = 3'o0; #20;
        a = 10; b = 5;  f = 3'o1; #20;
        a = 10; b = 5;  f = 3'o2; #20;
        a = 10; b = 5;  f = 3'o3; #20;
        a = 10; b = 5;  f = 3'o4; #20;
        a = 10; b = 5;  f = 3'o5; #20;
        a = 10; b = 5;  f = 3'o6; #20;
    end

endmodule
