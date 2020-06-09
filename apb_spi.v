`timescale 1ns / 1ps
module apb_spi(
    input pclk,
    input prst,
    input psel,
    input [15:0] paddr,
    input penable,
    input pwrite,
    input [31:0] pwdata,
    output [31:0] prdata,
	 output pready,
    output cs0,
    output cs1,
    output cs2,
    output cs3,
    input miso,
    output mosi,
    output sclk,
    output irq
    );

wire wr;
wire cmd;
wire rd;
wire [7:0] din;
wire [7:0] dout;

spi_if spi (
	.clk(pclk),
	.rst(~prst),
	.cs0(cs0),
	.cs1(cs1),
	.cs2(cs2),
	.cs3(cs3),
	.miso(miso),
	.mosi(mosi),
	.sclk(sclk),
	.irq(irq),
	.din(din),
	.dout(dout),
	.cmd(cmd),
	.rd(rd),
	.wr(wr)
);

parameter DATA_ADDR = 1;
parameter CMD_ADDR = 2;

assign din = pwdata[7:0];
assign rd = (~pwrite & psel & paddr == DATA_ADDR & penable);
assign prdata = rd ? {24'b0, dout[7:0]} : 32'bZ;
assign wr = (pwrite & psel & paddr == DATA_ADDR & penable);
assign cmd = (pwrite & psel & paddr == DATA_ADDR & penable);
assign pready = psel & penable;

endmodule
