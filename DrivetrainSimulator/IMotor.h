#pragma once
#include "ILogger.h"

class IMotor
{
public:

	virtual void setVoltage(double voltage);

	virtual double getVelocity(double dt);
};
