#pragma once
#include <iostream>
#include <string>

struct Translation2d
{
	double x;
	double y;

	std::string toString() const;
};

Translation2d operator+(const Translation2d& lhs, const Translation2d& rhs);
Translation2d& operator+=(Translation2d& lhs, const Translation2d& rhs);

Translation2d operator-(const Translation2d& lhs, const Translation2d& rhs);
Translation2d& operator-=(Translation2d& lhs, const Translation2d& rhs);


