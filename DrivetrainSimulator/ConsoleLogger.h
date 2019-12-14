#pragma once
#include "ILogger.h"
#include <iostream>

class ConsoleLogger : public ILogger
{
public:
	ConsoleLogger(LogSeverity minimumSeverity) : minimumSeverity(minimumSeverity) {}
	virtual ~ConsoleLogger() = default;

	virtual void log(LogSeverity severity, const std::string& message) const override;
	
	virtual void setMinimumSeverity(LogSeverity severity) override;

private:
	LogSeverity minimumSeverity;
};
