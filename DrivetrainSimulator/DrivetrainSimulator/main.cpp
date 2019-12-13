#include "ConsoleLogger.h"


int main()
{
	ConsoleLogger logger(LogSeverity::ERROR);
	logger.log(LogSeverity::WARNING, "Hello");
	return 0;
}
