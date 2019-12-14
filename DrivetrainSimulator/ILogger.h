#pragma once
#include <string>

enum LogSeverity
{
	DEBUG = 0,
	INFO = 1,
	WARNING = 2,
	ERROR = 3
};

class ILogger
{
public:

	virtual void log(LogSeverity severity, const std::string& message) const = 0;

	virtual void setMinimumSeverity(LogSeverity severity) = 0;
};
