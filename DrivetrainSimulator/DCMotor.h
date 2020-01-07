#pragma once
#include "IMotor.h"


class DCMotor :
	public IMotor
{
public:

	DCMotor(ILogger& logger, double vIntercept, double kv, double ka) : mLogger(mLogger), mVIntercept(vIntercept), mKv(kv), mKa(ka) {}

	virtual ~DCMotor() = default;

	/**
	* Set the voltage of the motor.
	*/
	virtual void setVoltage(double voltage) override;

	/**
	* Get the velocity of the motor given a certain delta time.
	*/
	virtual double getVelocity(double dt) override;

private:

	double normalize(double percent);

	ILogger& mLogger;
	double mVIntercept;
	double mKv;
	double mKa;

	double mVelocity;
	double mVoltage;
};

