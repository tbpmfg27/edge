
#include <frc/WPILib.h>
#include <Prefs.h>
#include <GoForward.h>

/* 
    drive system: tank
*/

class Robot : public frc::IterativeRobot {
 
public:
  Robot();
  void RobotInit();
  void RobotPeriodic();
  void AutonomousInit();
  void AutonomousPeriodic();
  void TeleopInit();
  void TeleopPeriodic();
  void TestPeriodic();

private:

    frc::Joystick a_joystick;
    frc::Joystick a_joystick2;

    GoForward a_goForward;
};
