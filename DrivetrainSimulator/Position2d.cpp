#include "Position2d.h"

Position2d operator+(const Position2d& lhs, const Position2d& rhs)
{
	return { lhs.translation + rhs.translation, lhs.rotation + rhs.rotation };
}

Position2d operator+=(Position2d& lhs, const Position2d& rhs)
{
	lhs.translation += rhs.translation;
	lhs.rotation += rhs.rotation;
	return lhs;
}

Position2d operator-(const Position2d& lhs, const Position2d& rhs)
{
	return { lhs.translation - rhs.translation, lhs.rotation - rhs.rotation };
}

Position2d operator-=(Position2d& lhs, const Position2d& rhs)
{
	lhs.translation -= rhs.translation;
	lhs.rotation -= rhs.rotation;
	return lhs;
}

std::string Position2d::toString() const
{
	return std::string("{ translation: ") + translation.toString() + ", rotation: " + rotation.toString() + " }";
}
