`timescale 1ns / 1ps
module tb_top;

	// Inputs
	reg pclk;
	reg prst;
	reg psel;
	reg [31:0] paddr;
	reg penable;
	reg pwrite;
	reg [31:0] pwdata;
	wire miso;
	
	localparam CLK = 62.5; // 16 MHz

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
		
		#CLK
		penable <= 1;
		wait(pready);
		
		#CLK
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
		
		#CLK
		penable <= 1;
		wait(pready);
		answer <= prdata[7:0];
		
		#CLK
		penable <= 0;
		psel <= 0;
		end
	endtask
	
	reg [7:0] response;
	reg [7:0] request;
	
	always @(posedge sclk) begin
		if (~cs1 | ~cs3) begin
			response <= {response[6:0], response[7]};
			request <= {request[6:0], mosi};
		end
	end
		
	assign miso = (cs1 & cs3) ? 1'bZ : response[0];
		
	always #(CLK/2)
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
		write(2, 8'b00111100); // clock 4MHz, IRQ enable, CS 4, mode 0
		#CLK;
		write(1, 8'b00110101);
		wait(irq)
		#CLK
		read();
		
		
		response = 8'b11100011;
		// Add stimulus here
		#200;
		write(2, 8'b01110111); // clock 1MHz, IRQ enable, CS 1, mode 4
		#CLK;
		write(1, 8'b01101011);
		wait(irq)
		#CLK
		read();
	end
      
endmodule

