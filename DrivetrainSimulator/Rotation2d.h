#pragma once
#include <iostream>
#include <string>

struct Rotation2d
{
	double theta;

	std::string toString() const;
};

Rotation2d operator+(const Rotation2d& lhs, const Rotation2d& rhs);
Rotation2d operator+=(Rotation2d& lhs, const Rotation2d& rhs);

Rotation2d operator-(const Rotation2d& lhs, const Rotation2d& rhs);
Rotation2d operator-=(Rotation2d& lhs, const Rotation2d& rhs);


