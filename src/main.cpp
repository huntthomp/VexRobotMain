/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       hltho                                                     */
/*    Created:      10/14/2024, 4:41:23 PM                                    */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

#include "vex.h"
#include <vector>

using namespace vex;

// A global instance of competition
competition Competition;

std::vector<int> InputVector{0, 0};

// define your global instances of motors and other devices here

void pre_auton(void)
{

  // All activities that occur before the competition starts
  // Example: clearing encoders, setting servo positions, ...
}

void autonomous(void)
{
}

void usercontrol(void)
{
  while (1)
  {
    InputVector = {
        Controller1.Axis1.position(),
        Controller3.Axis1.position()};
    wait(20, msec);
  }
}

int main()
{
  vexcodeInit();
  // Set up callbacks for autonomous and driver control periods.
  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);

  pre_auton();

  while (true)
  {
    wait(100, msec);
  }
}
