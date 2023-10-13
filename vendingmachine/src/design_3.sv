module design_3 (
	//input
	input logic        clk_i     ,
	input logic        nickel_i  ,
        input logic        dime_i    , 
	input logic        quarter_i ,	
	//output
	output logic       soda_o    ,
	output logic [2:0] change_o
	);
	//state
	parameter s0 = 2'b00; // state s0, c=0
	parameter s1 = 2'b01; // state s1, c=5	
	parameter s2 = 2'b10; // state s2, c=10
	parameter s3 = 2'b11; // state s3, c=15
	//present state and next state
	reg [1:0]  p_state,n_state;
	//when falling edge, present state = next state
	always@(negedge clk_i) p_state <= n_state;

	always@(posedge clk_i) begin
	soda_o   <= 0      ;
	change_o <= 3'b000 ;
	case (p_state)
	//state c=0
	s0: begin
		if (nickel_i==1)            begin
			n_state  <= s1     ;
			soda_o   <= 0      ;
			change_o <= 3'b000 ;
		end else if (dime_i==1)     begin
			n_state  <= s2     ;		
			soda_o   <= 0      ;
			change_o <= 3'b000 ;
		end else if (quarter_i==1)  begin
			n_state  <= s0     ;
			soda_o   <= 1      ;
			change_o <= 3'b001 ;
		end
	    end
	//state c=5	
	s1: begin
		if (nickel_i==1)            begin
			n_state  <= s2     ;
			soda_o   <= 0      ;   
			change_o <= 3'b000 ;
		end else if (dime_i==1)	    begin
			n_state  <=s3      ;
		        soda_o   <=0       ;
			change_o <= 3'b000 ;
		end else if (quarter_i==1)  begin
			n_state  <= s0     ;
			soda_o   <= 1      ;
			change_o <= 3'b010 ;
		end
	    end
	//state c=10	
	s2: begin
		if (nickel_i==1)            begin
			n_state  <= s3     ;
			soda_o   <= 0      ;
			change_o <= 3'b000 ;
		end else if (dime_i==1)	    begin
			n_state  <= s0     ;
			soda_o   <= 1      ;
			change_o <= 3'b000 ;
		end else if (quarter_i==1)  begin
			n_state  <= s0     ;
			soda_o   <= 1      ;
			change_o <= 3'b011 ;
		end
	    end
	//state c=15	
	s3: begin
		if (nickel_i==1)	    begin
			n_state  <= s0     ;
			soda_o   <= 1      ;
			change_o <= 3'b000 ;
		end else if (dime_i==1)	    begin
			n_state  <= s0     ;
			soda_o   <= 1      ;
			change_o <= 3'b001 ;
		end else if (quarter_i==1)  begin
			n_state  <= s0     ;
			soda_o   <= 1      ;
			change_o <= 3'b100 ;
		end
             end		
	 endcase
      end
endmodule : design_3
      	

