#include "Move.h"

void Move::move(Direction d)
{
	    if (d == Direction::NORTH) cout << "Движение на Север.";
		else if (d == Direction::EAST) cout << "Движение на Запад.";
		else if (d == Direction::WEST) cout << "Движение на Восток.";
		else if (d == Direction::SOUTH) cout << "Движение на Юг.";
		cout << endl;
	
}
