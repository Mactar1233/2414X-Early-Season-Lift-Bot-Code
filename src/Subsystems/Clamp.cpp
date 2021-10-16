#include "main.h"

pros::ADIAnalogIn Clamp_Piston (A);

bool piston_state;
Clamp_piston.set_value(piston_state)
if(master.get_digital(DIGITAL_R1) && piston_state == 0){
    piston_state = 1
    }
if(master.get_digtal(DIGITAL_R1) && piston_state == 1){
    piston_state = 0
}