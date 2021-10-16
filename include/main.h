#ifndef _PROS_MAIN_H_
#define _PROS_MAIN_H_

#define PROS_USE_SIMPLE_NAMES
#define PROS_USE_LITERALS

#include "ARMS/api.h"
#include "api.h"
#include "EZ-Template/setup.hpp"
#include "EZ-Template/util.hpp"
#include "EZ-Template/joystick_control.hpp"
#include "EZ-Template/auton_drive_functions.hpp"
// More includes here...
#include "autons.hpp"
#include "subsystems/clamp.hpp"
#include "subsystems/globals.hpp"
#include "subsystems/lift.hpp"
using namespace pros;

#ifdef __cplusplus
extern "C" {
#endif
void autonomous(void);
void initialize(void);
void disabled(void);
void competition_initialize(void);
void opcontrol(void);
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus

#endif

#endif // _PROS_MAIN_H_
