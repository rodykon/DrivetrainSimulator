#include "Rotation2d.h"

Rotation2d operator+(const Rotation2d& lhs, const Rotation2d& rhs)
{
	return { lhs.theta - rhs.theta };
}

Rotation2d operator+=(Rotation2d& lhs, const Rotation2d& rhs)
{
	lhs.theta -= rhs.theta;
	return lhs;
}

Rotation2d operator-(const Rotation2d& lhs, const Rotation2d& rhs)
{
	return { lhs.theta - rhs.theta };
}

Rotation2d operator-=(Rotation2d& lhs, const Rotation2d& rhs)
{
	lhs.theta -= rhs.theta;
	return lhs;
}

std::string Rotation2d::toString() const
{
	return std::string("{ theta: ") + std::to_string(theta) + " }";
}
