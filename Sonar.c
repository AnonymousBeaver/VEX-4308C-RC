#pragma config(Sensor, in2,    Light,          sensorReflection)
#pragma config(Sensor, dgtl2,  Sonar,          sensorSONAR_cm)
#pragma config(Motor,  port2,           FrontRight,    tmotorVex393_MC29, openLoop, driveRight)
#pragma config(Motor,  port5,           FrontLeft,     tmotorVex393_MC29, openLoop, driveLeft)
#pragma config(Motor,  port7,           RearLeft,      tmotorVex393_MC29, openLoop, driveLeft)
#pragma config(Motor,  port9,           RearRight,     tmotorVex393_MC29, openLoop, driveRight)
#pragma config(Motor,  port3,           Shootermotor1, tmotorVex393TurboSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port4,           Shootermotor2, tmotorVex393TurboSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port6,           Shootermotor3, tmotorVex393TurboSpeed_MC29, openLoop)
#pragma config(Motor,  port8,           Shootermotor4, tmotorVex393TurboSpeed_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while (true) {
		if (SensorValue[Sonar] > 20) {
			motor[Shootermotor1] = 647/6;
			motor[Shootermotor2] = 647/6;
			motor[Shootermotor3] = 647/6;
			motor[Shootermotor4] = 647/5;
		}
		else {
			motor[Shootermotor1] = 0;
			motor[Shootermotor2] = 0;
			motor[Shootermotor3] = 0;
			motor[Shootermotor4] = 0;
		}
	}
}
