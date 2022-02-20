// Verilator generated library/class.
#include "VOneBitAdder.h"

// Verilator libraries.
#include "verilated.h"
#include "verilated_vcd_c.h"


// C++ libraries.
#include <iostream>

int main()
{
    VOneBitAdder* design_under_test = new VOneBitAdder();

    // Tracing ON / DUMP VCD.
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    design_under_test->trace(tfp, 99);
    tfp->open("one_bit_adder.vcd");

    for (int i = 0; i < 1000; i++){


    	// Value generator.
    	int x = rand() % 2;
    	int y = rand() % 2;
    	int carry_in = rand() % 2;
	
    	// Feed data to DUT.
    	design_under_test->x = x & 1;
    	design_under_test->y = y & 1;
    	design_under_test->carry_in = carry_in & 1;
	
    	// Model the behavior of the DUT.
    	int expected_sum = ((!x)&(!y)&(carry_in))|((!x)&(y)&(!carry_in))|((x)&(!y)&(!carry_in))|((x)&(y)&(carry_in));
    	int expected_carry_out = ((x)&(carry_in))|((y)&(carry_in))|((x)&(y));
	
   	 
	// Simulate/evaluate/progress time.
    	design_under_test->eval();
    	tfp->dump(i);
    	design_under_test->eval();
	tfp->dump(i+1);

    	// Compare results.
    	int sum = ((int)design_under_test->sum) & 1;
    	int carry_out = ((int)design_under_test->carry_out) & 1;

    	bool sum_success = (sum == expected_sum);
    	bool carry_out_success = (carry_out == expected_carry_out);

    	if (sum_success && carry_out_success)
    	{
      	std::cout << "Test passed!" << std::endl;
    	}
    	else
    	{
      	std::cout << "Test failed :(" << std::endl;
      	std::cout << sum << std::endl;
      	std::cout << carry_out << std::endl;
    	}
    }
    tfp->close();
    return 0;
}
