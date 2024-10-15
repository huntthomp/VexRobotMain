#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

motor l1 = motor(PORT1, true);
motor l2 = motor(PORT2, true);
motor l3 = motor(PORT3, false);

motor r1 = motor(PORT4, true);
motor r2 = motor(PORT5, true);
motor r3 = motor(PORT6, false);

motor_group left_group = motor_group(l1, l2, l3);
motor_group right_group = motor_group(r1, r2, r3);
// lm, rm, wheelTravel, trackWidth, wheelBase, units, external gear ratio

drivetrain Drivetrain = drivetrain(left_group, right_group, 300, 300, 300, mm, 600 / 400);

// Axis1 Left and right of the right joystick.
// Axis2 Up and down of the right joystick.
// Axis3 Up and down of the left joystick.
// Axis4 Left and right of the left joystick.
//-100 to 100 (I think)

controller Controller1 = controller();

void vexcodeInit(void)
{
  // nothing to initialize
}