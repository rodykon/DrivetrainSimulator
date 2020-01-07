#include "DCMotor.h"

void DCMotor::setVoltage(double voltage)
{
	voltage = normalize(voltage);
	mLogger.log(LogSeverity::INFO, "Set voltage to " + std::to_string(voltage));
	mVoltage = voltage;
}

double DCMotor::getVelocity(double dt)
{
	double acceleration = (mVoltage - mVIntercept - mKv * mVelocity) / mKa;
	mVelocity += acceleration * dt;
	return mVelocity;
}

double DCMotor::normalize(double percent)
{
	if (percent > 1) {
		return 1;
	}
	else if (percent < -1) {
		return -1;
	}
	else {
		return percent;
	}
}
