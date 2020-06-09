`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:04:18 06/09/2020
// Design Name:   spi_if
// Module Name:   Y:/ambaspi/tb_spi_if.v
// Project Name:  ambaspi
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: spi_if
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_spi_if;

	// Inputs
	reg clk;
	reg rst;
	reg miso;
	reg [7:0] din;
	reg cmd;
	reg rd;
	reg wr;

	// Outputs
	wire sclk;
	wire mosi;
	wire cs0;
	wire cs1;
	wire cs2;
	wire cs3;
	wire [7:0] dout;
	wire irq;

	// Instantiate the Unit Under Test (UUT)
	spi_if uut (
		.clk(clk), 
		.rst(rst), 
		.miso(miso), 
		.sclk(sclk), 
		.mosi(mosi), 
		.cs0(cs0), 
		.cs1(cs1), 
		.cs2(cs2), 
		.cs3(cs3), 
		.din(din), 
		.cmd(cmd), 
		.rd(rd), 
		.wr(wr), 
		.dout(dout), 
		.irq(irq)
	);
   
   // Generate clock
   always #5 begin
      clk = ~clk;
   end
	
	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		miso = 1;
		din = 0;
		cmd = 0;
		rd = 0;
		wr = 0;

		// Wait 100 ns for global reset to finish
		#100;
		rst = 1;
		#100;
		rst = 0;
		# 100;
		        
		// Add stimulus here
		din = 8'b00110111;
		cmd = 1;
		#10;
		cmd = 0;
		#10;
		din = 8'b01100000;
		wr = 1;
		#10;
		wr = 0;
		#400;
		rd = 1;
		#10;
		rd = 0;
	end
      
endmodule

