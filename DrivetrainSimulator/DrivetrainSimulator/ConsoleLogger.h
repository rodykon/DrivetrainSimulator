#pragma once
#include "ILogger.h"
#include <iostream>

class ConsoleLogger : public ILogger
{
public:
	ConsoleLogger(LogSeverity minimumSeverity) : minimumSeverity(minimumSeverity) {}
	virtual ~ConsoleLogger() = default;

	virtual void log(LogSeverity severity, std::string message) override;
	
	virtual void setMinimumSeverity(LogSeverity severity) override;

private:
	LogSeverity minimumSeverity;
};
