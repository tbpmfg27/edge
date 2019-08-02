
#include <Robot.h>
#include <GoForward.h>

Robot::Robot() :
    a_joystick(JOYSTICK_PORT),
    a_joystick2(JOYSTICK_PORT2),
    a_goForward(LEFT_TALON_ID, RIGHT_TALON_ID)
{

}

void Robot::RobotInit() {

}

void Robot::RobotPeriodic() {

}

void Robot::AutonomousInit() {

}

void Robot::AutonomousPeriodic() {

}

void Robot::TeleopInit() {

}

void Robot::TeleopPeriodic() {
    a_goForward.Update(a_joystick.GetRawAxis(1), a_joystick.GetRawAxis(2));
}

void Robot::TestPeriodic() {
  
}

