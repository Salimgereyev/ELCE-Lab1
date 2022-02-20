// Verilator generated library/class.
#include "VOneBitAdder.h"

// Verilator libraries.
#include "verilated.h"
#include "verilated_vcd_c.h"

// C++ libraries.
#include <iostream>

int main()
{
    // Instantiate the DUT.
    VOneBitAdder* design_under_test = new VOneBitAdder();
    
    //Tracing ON / DUMP VCD.
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    design_under_test->trace(tfp, 99);
    tfp->open("one_bit_added.vcd");

    // Value generator.
    int x = 1;
    int y = 1;
    int carry_in = 0;

    // Feed data to DUT.
    design_under_test->x = x & 1;
    design_under_test->y = y & 1;
    design_under_test->carry_in = carry_in & 1;

    // Model the behavior of the DUT.
    int expected_sum = 0;
    int expected_carry_out = 1;

    // Simulate/evaluate/progress time.
    design_under_test->eval();
    tfp->dump(0);

    design_under_test->eval();
    tfp->dump(1);

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

    tfp->close();
    return 0;
}
