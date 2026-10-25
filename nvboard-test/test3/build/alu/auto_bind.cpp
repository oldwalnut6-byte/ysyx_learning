#include <nvboard.h>
#include "Valu.h"

void nvboard_bind_all_pins(Valu* top) {
	nvboard_bind_pin( &top->a, 4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->b, 4, SW7, SW6, SW5, SW4);
	nvboard_bind_pin( &top->instr, 3, SW15, SW14, SW13);
	nvboard_bind_pin( &top->alu_result, 4, LD3, LD2, LD1, LD0);
	nvboard_bind_pin( &top->cmp_less, 1, LD4);
	nvboard_bind_pin( &top->cmp_equal, 1, LD5);
}
