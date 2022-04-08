`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2022/03/19 20:37:19
// Design Name: 
// Module Name: ALU_6bits
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


module ALU_6bits
(
    input clk,
    input en,
    input [1:0] sel,
    input [5:0] x,
    output [5:0] y,
    output z
);

    reg ef, ea, eb;

    always @(posedge clk, posedge en) 
    begin
        if(en)
        begin
            case(sel)
                2'b00: ea = 1; 
                2'b01: eb = 1;
                default:  ef = 0;
            endcase
        end
        else
        begin
            ef = 0;
            ea = 0;
            eb = 0;
        end
    end


    always @(*) begin
        case (f)
            3'o0: 
                y = a + b;
            3'o1: 
                y = a - b;
            3'o2: 
                y = a & b;
            3'o3: 
                y = a | b;
            3'o4: 
                y = a ^ b;
            default: 
            begin
                z = 1;
                y = 0;
            end
        endcase
    end
endmodule
