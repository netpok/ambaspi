`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:26:07 06/09/2020 
// Design Name: 
// Module Name:    spi_if 
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
module spi_if(
	input clk,
	input rst,

	input miso,
	output sclk,
	output mosi,
	output cs0,
	output cs1,
	output cs2,
	output cs3,

   input [7:0] din,
   input cmd,
   input rd,
   input wr,
   output [7:0] dout,
   output irq
   );
	 
reg csn;
wire shift;

wire [2:0] clk_div;
wire irq_en;
wire [1:0] cs_sel;
wire [1:0] mode;

wire clock;
wire clock_rising;
reg [3:0] clock_cntr;
reg clock_last;

always @(posedge clk)
begin
	if (rst)
		clock_cntr <= 0;
	else
		clock_cntr <= clock_cntr + 1;
end

assign clock = clock_cntr[clk_div];

always @(posedge clk)
begin
	if (rst)
		clock_last <= 0;
	else
		clock_last <= clock;
end

assign clock_rising = ({clock, clock_last} == 2'b10);


reg [2:0] bit_cntr; 

cfg conf (
	.clk(clk),
	.rst(rst),
	.din(din),
	.cmd(cmd),
	.clk_div(clk_div),
	.irq_en(irq_en),
	.cs_sel(cs_sel),
	.mode(mode)
);

spi_shr shr (
	.clk(clk),
	.rst(rst),
	.load(wr),
	.shift(shift),
	.din(din),
	.in(miso),
	.dout(dout),
	.out(mosi)	
);

reg [3:0] state;
parameter S_IDLE     = 4'b0000;   // Idle
parameter S_START    = 4'b0001;   // Start transmission
parameter S_TRANSMIT = 4'b0010;   // 1st byte on output ...
parameter S_DONE     = 4'b0011;   // ... 8th byte on output

always @ (posedge clk)
begin
	if (rst | rd) begin
		state <= S_IDLE;
		bit_cntr <= 0;
		csn <= 0;
	end
	else if (wr) begin 
		state <= S_START;
		bit_cntr <= bit_cntr;
		csn <= 0;
	end
	else if (clock_rising & state == S_START) begin
		csn <= 1;
		bit_cntr <= 7;
		state <= S_TRANSMIT;
	end
	else if (clock_rising & state == S_TRANSMIT & bit_cntr == 0) begin
		csn <= 0;
		bit_cntr <= bit_cntr;
		state <= S_DONE;
	end
	else if (clock_rising & state == S_TRANSMIT) begin
		csn <= csn;
		bit_cntr <= bit_cntr - 1;
		state <= state;
	end
	else begin
		csn <= csn;
		bit_cntr <= bit_cntr;
		state <= state;
	end			
end

assign sclk = ((clock_last ^ ~mode[0]) & state == S_TRANSMIT) ^ mode[1];
assign shift = (clock_rising & state == S_TRANSMIT);
assign irq = (irq_en & state == S_DONE);
assign cs0 = ~((cs_sel == 0) & csn);
assign cs1 = ~((cs_sel == 1) & csn);
assign cs2 = ~((cs_sel == 2) & csn);
assign cs3 = ~((cs_sel == 3) & csn);

endmodule
