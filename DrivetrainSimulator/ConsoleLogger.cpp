#include "ConsoleLogger.h"

void ConsoleLogger::log(LogSeverity severity, const std::string& message)
{
	if (severity >= minimumSeverity) {
		std::cout << severity << ": " << message.data() << std::endl;
	}
}

void ConsoleLogger::setMinimumSeverity(LogSeverity severity)
{
	minimumSeverity = severity;
}
