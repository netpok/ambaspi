`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:16:42 06/09/2020
// Design Name:   apb_spi
// Module Name:   Y:/ambaspi/tb_top.v
// Project Name:  ambaspi
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: apb_spi
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_top;

	// Inputs
	reg pclk;
	reg prst;
	reg psel;
	reg [15:0] paddr;
	reg penable;
	reg pwrite;
	reg [31:0] pwdata;
	wire miso;

	// Outputs
	wire [31:0] prdata;
	wire cs0;
	wire cs1;
	wire cs2;
	wire cs3;
	wire mosi;
	wire sclk;
	wire irq;
	wire pready;

	// Instantiate the Unit Under Test (UUT)
	apb_spi uut (
		.pclk(pclk), 
		.prst(prst), 
		.psel(psel), 
		.paddr(paddr), 
		.penable(penable), 
		.pwrite(pwrite), 
		.pwdata(pwdata), 
		.prdata(prdata), 
		.pready(pready),
		.cs0(cs0), 
		.cs1(cs1), 
		.cs2(cs2), 
		.cs3(cs3), 
		.miso(miso), 
		.mosi(mosi), 
		.sclk(sclk), 
		.irq(irq)
	);

	task write(input [7:0] addr, input [7:0] data);
	begin
		wait(pclk);
		paddr <= addr;
		pwrite <= 1;
		psel <= 1;
		pwdata <= data;
		
		#4
		penable <= 1;
		wait(pready);
		
		#4
		penable <= 0;
		psel <= 0;
	end
	endtask

	reg [7:0] answer;
	
	task read;
	begin
		wait(pclk);
		paddr <= 1;
		pwrite <= 0;
		psel <= 1;
		
		#4
		penable <= 1;
		wait(pready);
		answer <= prdata[7:0];
		
		#4
		penable <= 0;
		psel <= 0;
		end
	endtask
	
	reg [7:0] response;
	reg [7:0] request;
	
	always @(posedge sclk) begin
		if (~cs1) begin
			response <= {response[6:0], response[7]};
			request <= {request[6:0], mosi};
		end
	end
		
	assign miso = response[0];
		
	always #2
		pclk = ~pclk;


	initial begin
		// Initialize Inputs
		pclk = 0;
		prst = 0;
		psel = 0;
		paddr = 0;
		penable = 0;
		pwrite = 0;
		pwdata = 0;
		response = 8'b10101100;

		// Wait 100 ns for global reset to finish
		#100;
		prst = 1;
        
		// Add stimulus here
		#100;
		write(2, 8'b00111100); // Prescaler 2 (4MHz), IRQ enable, CS 4, mode 0
		#100;
		write(1, 8'b00110101);
		wait(irq)
		read();
	end
      
endmodule

