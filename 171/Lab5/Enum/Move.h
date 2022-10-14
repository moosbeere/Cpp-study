#pragma once
#include <iostream>
using namespace std;

enum class Direction {
	SOUTH,
	WEST,
	EAST,
	NORTH
};

class Move
{
public:
	static const int SOUTH = 1;
	static const int WEST = 2;
	static const int EAST = 3;
	static const int NORTH = 4;
	static void move(Direction d);
};

