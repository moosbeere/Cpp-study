// Template.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

template <typename N>
class Player {
	N health;
public:
	Player(N health) : health(health) {};
	N getHealth() {
		return this->health;
	}
	void setHealth(N health) {
		this->health = health;
	}
	Player operator +(Player pl) {
		return health + pl.health;
	}
	void test(Player* p) {
		if (p == nullptr) cout<<"nullptr"<<"\n";
		else cout<<p->getHealth()<<"\n";
	}

};

template <typename TF>
TF add(TF a, TF b) {
	return a + b;
}

//typedef int Coord;
using Coord = int;

class Rectangle {
public:
	Coord x;
	Coord y;
};


int main()
{
	Player<int> p1(50);
	//cout << p1.getHealth() << "\n";
	Player<int> p2(2);
	cout << p2.getHealth() << "\n";
	cout << p1.getHealth() << "\n";
	cout << add(p1, p2).getHealth() << "\n";
	cout << add(5, 7) << "\n";

	p1.test(nullptr);
	p1.test(&p2);


	//p1.setHealth(20);
	//cout << p1.getHealth() << "\n";



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
