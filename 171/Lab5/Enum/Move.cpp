#include "Move.h"

void Move::move(Direction d)
{
	    if (d == Direction::NORTH) cout << "�������� �� �����.";
		else if (d == Direction::EAST) cout << "�������� �� �����.";
		else if (d == Direction::WEST) cout << "�������� �� ������.";
		else if (d == Direction::SOUTH) cout << "�������� �� ��.";
		cout << endl;
	
}
