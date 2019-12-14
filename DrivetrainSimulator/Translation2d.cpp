#include "Translation2d.h"

Translation2d operator+(const Translation2d& lhs, const Translation2d& rhs)
{
	return { lhs.x + rhs.x, lhs.y + rhs.y };
}

Translation2d& operator+=(Translation2d& lhs, const Translation2d& rhs)
{
	lhs.x += rhs.x;
	lhs.y += rhs.y;
	return lhs;
}

Translation2d operator-(const Translation2d& lhs, const Translation2d& rhs)
{
	return { lhs.x - rhs.x, lhs.y - rhs.y };
}

Translation2d& operator-=(Translation2d& lhs, const Translation2d& rhs)
{
	lhs.x -= rhs.x;
	lhs.y -= rhs.y;
	return lhs;
}

std::string Translation2d::toString() const
{
	return std::string("{ ") + std::to_string(x) + ", " + std::to_string(y) + " }";
}
