`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:39:27 06/09/2020 
// Design Name: 
// Module Name:    apb 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module apb(
    input clk,
    input rst,
    input psel,
    input [15:0] paddr,
    input penable,
    input pwrite,
    input [31:0] pwdata,
    output [31:0] prdata
	 
	 output cmd,
	 output wr,
	 output rd,
	 output [7:0] dout,
	 input [7:0] din,
    );

parameter DATA_ADDR = 1;
parameter CMD_ADDR = 2;

assign dout = pwdata[7:0];
assign rd = (~pwrite & psel & paddr = DATA_ADDR & penable);
assign prdata = rd ? {24'b0, din[7:0]} : 32'bZ;
assign wr = (pwrite & psel & paddr = DATA_ADDR & penable);
assign cmd = (pwrite & psel & paddr = DATA_ADDR & penable);


endmodule
