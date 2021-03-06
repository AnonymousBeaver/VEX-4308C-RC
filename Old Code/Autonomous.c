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
	clearTimer(T1);

	while(getTimerValue(T1)<1000){
		motor[frightMotor] = -80;
		motor[fleftMotor] = -80;
	}
}
