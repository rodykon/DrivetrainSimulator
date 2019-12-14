#pragma once
#include "Translation2d.h"
#include "Rotation2d.h"

struct Position2d
{
	Translation2d translation;
	Rotation2d rotation;

	std::string toString() const;
};

Position2d operator+(const Position2d& lhs, const Position2d& rhs);
Position2d operator+=(Position2d& lhs, const Position2d& rhs);

Position2d operator-(const Position2d& lhs, const Position2d& rhs);
Position2d operator-=(Position2d& lhs, const Position2d& rhs);
