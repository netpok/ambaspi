`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:29:47 06/09/2020 
// Design Name: 
// Module Name:    config 
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
module cfg(
	 input clk,
	 input rst,
	 
    input [7:0] din,
    input cmd,
    output [2:0] clk_div,
    output irq_en,
    output [1:0] cs_sel,
    output [1:0] mode
    );

reg [7:0] cfg_reg;

always @ (posedge clk)
begin
	if (rst)
		cfg_reg <= 0;
	else if (cmd)
	   cfg_reg <= din;
end

assign clk_div = cfg_reg[7:5];
assign irq_en  = cfg_reg[4];
assign cs_sel  = cfg_reg[3:2];
assign mode    = cfg_reg[1:0];

endmodule
