#pragma config(Sensor, dgtl2,  MotorEncoder,   sensorQuadEncoder)
#pragma config(Motor,  port2,           Shootermotor1, tmotorVex393TurboSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port5,           Shootermotor2, tmotorVex393TurboSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port7,           Shootermotor3, tmotorVex393TurboSpeed_MC29, openLoop)
#pragma config(Motor,  port9,           Shootermotor4, tmotorVex393TurboSpeed_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

int speedValue;

task main()
{
	for(;;) {
		speedValue = SensorValue[MotorEncoder];
	}
}