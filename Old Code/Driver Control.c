#pragma config(Motor,  port2,           backMotor,     tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port3,           frightMotor,   tmotorServoContinuousRotation, openLoop, reversed)
#pragma config(Motor,  port4,           fleftMotor,    tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port5,           intakeMotor,   tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port6,           middleMotor,   tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port7,           turntableMotor, tmotorServoStandard, openLoop)
#pragma config(Motor,  port8,           rshooterMotor, tmotorVex393TurboSpeed_MC29, openLoop)
#pragma config(Motor,  port9,           lshooterMotor, tmotorVex393TurboSpeed_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while (true) {
		if (fabs(vexRT[Ch1]) > 25){
			motor[frightMotor] = vexRT[Ch3] - vexRT[Ch4]/2 + vexRT[Ch1]/2;
			motor[fleftMotor] = vexRT[Ch3] + vexRT[Ch4]/2 + vexRT[Ch1]/2;
			motor[backMotor] = -vexRT[Ch4] + vexRT[Ch1]/2;
		}
		else {
			motor[frightMotor] = vexRT[Ch3] - vexRT[Ch4]/2;
			motor[fleftMotor] = vexRT[Ch3] + vexRT[Ch4]/2;
			motor[backMotor] = -vexRT[Ch4];
		}
		//Front intake motor
		//Upper is towards the back
		if (vexRT[Btn5U]== 1 && vexRT[Btn5D] == 0) {
			motor[intakeMotor] = -127;
		}
		else if (vexRT[Btn5U] == 0 && vexRT[Btn5D] == 1) {
			motor[intakeMotor] = 127;
		}
		else {
			motor[intakeMotor] = 0;
		}
		//The middle motor
		//Upper is towards the back
		if (vexRT[Btn6U] == 1 && vexRT[Btn6D] == 0) {
			motor[middleMotor] = -127;
		}
		else if (vexRT[Btn6U] == 0 && vexRT[Btn6D] == 1) {
			motor[middleMotor] = 127;
		}
		else {
			motor[middleMotor] = 0;
		}
		/*Turntable motor
		//Upper is towards the back
		if (vexRT[Btn8U] == 1 && vexRT[Btn8D] == 0) {
		motor[turntableMotor] = 20;
		}
		else if (vexRT[Btn8U] == 0 && vexRT[Btn8D] == 1) {
		motor[turntableMotor] = -20;
		}
		else {
		motor[turntableMotor] = 0;
		}*/
		//Shooter
		if (vexRT[Btn7U]== 1 && vexRT[Btn7D]== 0) {
			motor[rshooterMotor] = -127;
			motor[lshooterMotor] = 127;
		}
		else if (vexRT[Btn7U] == 0 && vexRT[Btn7D]== 1 ) {
			motor[rshooterMotor] = 127;
			motor[lshooterMotor] = -127;
		}
		else {
			motor[rshooterMotor] = 0;
			motor[lshooterMotor] = 0;
		}
		//Break shooter motors
		if (vexRT[Btn7R] == 1){
			motorType[rshooterMotor] = tmotorNone;
			motorType[lshooterMotor] = tmotorNone;
			motorType[rshooterMotor] = tmotorVex393TurboSpeed_MC29;
			motorType[lshooterMotor] = tmotorVex393TurboSpeed_MC29;
		}
		else {}
	}
}