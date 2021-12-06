#include "include/main.h"

pros::ADIDigitalOut piston('A');

bool piston_state = false;

void Piston_Clamp(){
    piston_state = !piston_state;
    piston.set_value(piston_state);
}


void Piston_Toggle(){
    if(master.get_digital_new_press(DIGITAL_R1)) {
        Piston_Clamp();
    }


