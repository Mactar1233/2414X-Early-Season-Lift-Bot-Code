#include "main.h"


const static int num_of_pos = 2; // Number of lift positions
const static int lift_heights[num_of_pos] = {0, 310}; // Lift Positions


// Driver Control Variables
int up_lock = 0;
int down_lock = 0;
int lift_state = 0;


pros::Motor blift(6, MOTOR_GEARSET_36, false, MOTOR_ENCODER_DEGREES);
pros::ADIDigitalIn Tare_Blift_Limit_Switch ('C')


void set_Blift(int input)  { lift = input; }

void zero_Blift()    { lift.tare_position(); }
int  get_Blift()     { return lift.get_position(); }
int  get_Blift_vel() { return lift.get_actual_velocity(); }

void
set_Blift_position(int target, int speed) {
  lift.move_absolute(target, speed);
}

///
// Driver Control
//  - when R1 is pressed, bring the lift up the position ladder
//  - when R2 is pressed, bring the lift down the position ladder
///
void
Blift_control() {
  // Lift Up
  if(Tare_Blift_Limit_Switch == 1){
      lift_state == 0
  }
  if (master.get_digital(DIGITAL_L1) && up_lock==0) {
    // If lift is at max height, bring it down to 0
    if(lift_state==num_of_pos-1)
      lift_state = 0;
    // Otherwise, bring the lift up
    else
      lift_state++;

    up_lock = 1;
  }
  else if (!master.get_digital(DIGITAL_L1)) {
    up_lock = 0;
  }
 // Set the lift to the current position in the array
  set_lift_position(lift_heights[lift_state], 100);{
}