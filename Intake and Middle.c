#pragma config(Motor,  port2,           backMotor,     tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port3,           frightMotor,   tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port4,           fleftMotor,    tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port5,           intakeMotor,   tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port6,           middleMotor,   tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port7,           lshooter1Motor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           lshooter2Motor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           rshooter1Motor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          rshooter2Motor, tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

int intake = 0;
int middle = 0;

task main()
{
	//Front intake motor
	//Upper is towards the back
	if (vexRT[Btn7D]== 1) {
		if (intake == 0 || intake == -1) {
			motor[intakeMotor] = 127;
			intake = 1;
		}
		else if (intake == 1) {
			motor[intakeMotor] = 0;
			intake = 0;
		}
	}
	else if(vexRT[Btn7U]== 1) {
		if (intake == 0 || intake == 1) {
			motor[intakeMotor] = -127;
			intake = -1;
		}
		else if (intake == -1) {
			motor[intakeMotor] = 0;
			intake = 0;
		}
	}
	//The middle motor
	//Upper is towards the back
	if (vexRT[Btn8D]== 1) {
		if (middle == 0 || middle == -1) {
			motor[middleMotor] = 127;
			middle = 1;
		}
		else if (intake == 1) {
			motor[intakeMotor] = 0;
			middle = 0;
		}
	}
	else if(vexRT[Btn8U]== 1) {
		if (middle == 0 || middle == 1) {
			motor[middleMotor] = -127;
			middle = -1;
		}
		else if (middle == -1) {
			motor[middleMotor] = 0;
			middle = 0;
		}
	}
}
