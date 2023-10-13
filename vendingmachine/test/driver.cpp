#define MAX_SIM 100

void set_random(Vtop *dut, vluint64_t sim_unit) {
	//input nickel 
	if(sim_unit==4||sim_unit==10||sim_unit==13||sim_unit==18|sim_unit==19)              dut -> nickel_i  = 1;
        else dut-> nickel_i   = 0;

	//input dime
	if(sim_unit==3||sim_unit==8||sim_unit==12||sim_unit==14||sim_unit==17)              dut -> dime_i    = 1;
	else dut -> dime_i    = 0;

	//input quarter
	if(sim_unit==5||sim_unit==1||sim_unit==9||sim_unit==11||sim_unit==16||sim_unit==20) dut -> quarter_i = 1;
	else dut -> quarter_i = 0;

	//case 1
	//coin in = 25         => soda = 1 and change = 5(001)
	
	//case 2
	//coin in = 10+5+25=40 => soda = 1 and change = 20(100)
	
	//case 3
	//coin in = 10+25=35   => soda = 1 and change = 15(011)
	
	//case 4
	//coin in = 5+25=30    => soda = 1 and change = 10(010)
	
	//case 5
	//coin in = 10+5+10    => soda = 1 and change = 5(001)
	
	//case 6
	//coin in = 25         => soda = 1 and change = 5(001)
	
	//case 7
	//coin in = 10+5+5     => soda = 1 and change = 0(000)
	
	//case 8
	//coin in = 25         => soda = 1 and change = 5(001)
}
