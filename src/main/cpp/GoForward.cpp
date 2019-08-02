
#include <GoForward.h>
#include <Prefs.h>

GoForward::GoForward(int left1, int right2) :
    a_left1(left1),
    a_right2(right2),
    a_diffDrive(a_left1, a_right2) 
{

}

void GoForward::Update(float leftSpeed, float rightSpeed) {

    a_diffDrive.TankDrive(leftSpeed, rightSpeed); 

}

/* 
    Tasks for next meeting:
    - add motor objects
        - set speed and update
    - add joystick

    motor: class name = WPI_TalonSRX
*/