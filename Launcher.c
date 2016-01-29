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
	while (1) {
		//Turntable motor
		//Upper is towards the back
		if (vexRT[Btn8U] == 1 && vexRT[Btn8D] == 0) {
			motor[turntableMotor] = 20;
		}
		else if (vexRT[Btn8U] == 0 && vexRT[Btn8D] == 1) {
			motor[turntableMotor] = -20;
		}
		else {
			motor[turntableMotor] = 0;
		}
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
	}
}