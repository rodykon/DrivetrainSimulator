#include <iostream>
#include "Position2d.h"

int main()
{
	Position2d pos{ { 1, 2 }, { 1.2 } };

	std::cout << pos.toString().data() << std::endl;
}