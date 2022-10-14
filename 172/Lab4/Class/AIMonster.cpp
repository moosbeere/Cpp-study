#include "AIMonster.h"

void AIMonster::move(Monster* m)
{
	if (m->health > 0) cout << m->name << " is moving!" << endl;
	else cout << m->name << " died!" << endl;
}
