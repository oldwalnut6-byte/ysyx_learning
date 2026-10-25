#include <nvboard.h>
#include "Vshift_reg.h"

void nvboard_bind_all_pins(Vshift_reg* top) {
	nvboard_bind_pin( &top->clk, 1, BTNC);
	nvboard_bind_pin( &top->rst, 1, SW15);
	nvboard_bind_pin( &top->mode, 3, SW10, SW9, SW8);
	nvboard_bind_pin( &top->din, 8, SW7, SW6, SW5, SW4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->serial_in, 1, SW11);
	nvboard_bind_pin( &top->dout, 8, LD7, LD6, LD5, LD4, LD3, LD2, LD1, LD0);
}
