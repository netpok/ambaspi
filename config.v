`timescale 1ns / 1ps

module cfg(
	 input clk,
	 input rst,
	 
    input [7:0] din,
    input cmd,
    output [1:0] clk_div,
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

assign clk_div = cfg_reg[6:5];
assign irq_en  = cfg_reg[4];
assign cs_sel  = cfg_reg[3:2];
assign mode    = cfg_reg[1:0];

endmodule
