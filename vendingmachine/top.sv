module top (
	input logic clk_i,
	input logic nickel_i,
	input logic dime_i,
	input logic quarter_i,
	output logic soda_o,
	output logic [2:0] change_o );
design_3 dut (
    .clk_i    (clk_i ),
    .nickel_i (nickel_i ),
    .dime_i   (dime_i   ),
    .quarter_i(quarter_i),
    .soda_o   (soda_o),
    .change_o (change_o)
);
endmodule:top
