// Template.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

template <typename T>
class Player {
	T health;
public:
	Player(T health) :health(health) {};

	T getHealth() {
		return this->health;
	}
	void setHealth(T health) {
		this->health = health;
	}

	Player operator +(Player p) {
		return Player(health + p.health);
	}

	void test(Player* p) {
		if (p == nullptr) std::cout << "nullptr" << "\n";
		else p->getHealth();
	}
};

//typedef int Coord;
//typedef int Count;
using Coord = int;
using Count = int;

class Rectangle {
	Coord x;
	Coord y;
};


template <typename TF>
TF add(TF a, TF b) {
	return a + b;
}
int main()
{
	Count i = 1;
	Player<int> p1(20);
	std::cout << p1.getHealth() << "\n";
	Player<int> p2(20);
	std::cout << p2.getHealth() << "\n";
	std::cout << add(0.2, 4.5) << "\n";

	std::cout << add(p1, p2).getHealth() << "\n";
	p2.test(nullptr);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
