#pragma once
#include "Monster.h"
class CrawlingMonster : public Monster
{
public:
	void attack(Monster* m) override {
		std::cout << "Crawling monster deals damage " << m->getName() << "\n";
	}
};