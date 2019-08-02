
#include <frc/WPILib.h>
#include "ctre/Phoenix.h"
#include <Prefs.h>

class GoForward {

    public:
      
      GoForward(int left1, int right2);

      void Update(float leftSpeed, float rightSpeed);

    private:

      frc::DifferentialDrive a_diffDrive;

      WPI_TalonSRX a_left1;
      WPI_TalonSRX a_right2;

      
};