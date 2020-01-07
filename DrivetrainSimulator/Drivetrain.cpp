#include "Drivetrain.h"

void Drivetrain::setLeftRightMotorPower(double leftPower, double rightPower)
{
	mLeftMotor.setVoltage(leftPower);
	mRightMotor.setVoltage(rightPower);
}

void Drivetrain::calculatePosition(double dt)
{
	double rightDistance = mRightMotor.getVelocity(dt) * dt;
	double leftDistance = mLeftMotor.getVelocity(dt) * dt;

	double radius = calculateRadius(rightDistance, leftDistance);

	Rotation2d rotation = { (rightDistance + leftDistance) / (2 * radius) };
	Translation2d translation = { radius * (1 - std::cos(rotation.theta)), radius * (1 - std::sin(rotation.theta)) };

	mPosition += { translation, rotation };
	mLogger.log(LogSeverity::INFO, "Set drivetrain position to " + mPosition.toString());
}

double Drivetrain::calculateRadius(double rightDistance, double leftDistance)
{
	double smallRadius = 0;
	
	if (rightDistance > leftDistance) {
		smallRadius = leftDistance * mWheelbaseWidth / (rightDistance - leftDistance);
	}
	else {
		smallRadius = rightDistance * mWheelbaseWidth / (leftDistance - rightDistance);
	}

	return smallRadius + 0.5 * mWheelbaseWidth;
}
