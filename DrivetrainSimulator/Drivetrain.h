#pragma once
#include "IEntity.h"
#include "ILogger.h"
#include "IMotor.h"


class Drivetrain :
	public IEntity
{
public:

	Drivetrain(ILogger& logger, double wheelbaseWidth, IMotor& leftMotor, IMotor& rightMotor, const Position2d& position) : mLogger(logger), mWheelbaseWidth(wheelbaseWidth), mLeftMotor(leftMotor), mRightMotor(rightMotor), mPosition(position) {}

	virtual ~Drivetrain() = default;

	void setLeftRightMotorPower(double leftPower, double rightPower);

	void draw();

private:

	void calculatePosition(double dt);
	double calculateRadius(double rightDistance, double leftDistance);

	ILogger& mLogger;
	double mWheelbaseWidth;
	IMotor& mLeftMotor;
	IMotor& mRightMotor;
	Position2d mPosition;
};

