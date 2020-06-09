`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:09:16 06/09/2020 
// Design Name: 
// Module Name:    spi_shr 
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
module spi_shr(
    input clk,
    input rst,
    input load,
    input shift,
    input in,
    input [7:0] din,
    input out,
    input [7:0] dout
    );

reg [8:0] shr;

always @ (posedge clk)
begin
	if (rst)
		shr <= 0;
	else if (load)
		shr <= din;
	else if (shift)
		shr <= {shr[6:0], in};
	else
		shr <= shr;
end

assign dout = shr;
assign out = shr[7];

endmodule
