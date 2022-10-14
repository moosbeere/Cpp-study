#pragma once

enum class Direction {
	NORTH,
	EAST,
	WEST, 
	SOUTH
};
class Move
{
public:
	static const int NORTH = 1;
	static const int EAST = 2;
	static const int WEST = 3;	
	static const int SOUTH = 4;
	static void move(Direction d);
};

