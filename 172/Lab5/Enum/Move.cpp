#include "Move.h"
#include <iostream>
using namespace std;

void Move::move(Direction d)
{
		if (d == Direction::NORTH) cout << "�������� �� �����!";
		else if (d == Direction::EAST) cout << "�������� �� ������!";
		else if (d == Direction::SOUTH) cout << "�������� �� �����!";
		else if (d == Direction::WEST) cout << "�������� �� ��!";
		cout << endl;
}
