#include "main.h"

pros::ADIDigitalOut piston('A');

bool piston_state = false;

if(master.get_digital(DIGITAL_R1)) {
    piston_state = !piston_state;
    piston.set_value(piston_state);
}