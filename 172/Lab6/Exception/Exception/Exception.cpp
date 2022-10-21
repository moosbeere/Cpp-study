// Exception.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

enum PlayerCode {
	NEGATIVE,
	BIG,
	ZERO
};

class PlayerException: public std::exception {
	PlayerCode code;
public:
	PlayerException(PlayerCode code) : code(code) {}
	const char* what() const throw() {
		if (code == PlayerCode::NEGATIVE) return "Health < 0";
		else if (code == PlayerCode::BIG) return "Health >100";
		else if (code == PlayerCode::ZERO) return "Health = 0";
	}
};

class Player {
	int health;
public: 
	Player(int health) : health(health) {
		if (health < 0) throw PlayerException(PlayerCode::NEGATIVE);
		else if (health > 100) throw PlayerException(PlayerCode::BIG);
		else if (health == 0) throw PlayerException(PlayerCode::ZERO);
	}
	int getHealth() {
		return this->health;
	}
	void setHealth(int health) {
		if (health < 0) throw PlayerException(PlayerCode::NEGATIVE);
		else if (health > 100) throw PlayerException(PlayerCode::BIG);
		else if (health == 0) throw PlayerException(PlayerCode::ZERO);
		this->health = health;
	}
};

int main()
{
	//Player(-10);
	try {
		Player p1(10);
		std::cout << p1.getHealth()<<"\n";
		p1.setHealth(-19);
	}
	catch (PlayerException err) {
		std::cout << "Warning " << err.what();
	}
	
	


	/*int x = 5;
	int y = 0;
	try {
		if (y == 0) throw "Warning: division by zero";
		std::cout << "x / y = " << x / y << "\n";
	}
	catch (const char* msg) {
		std::cout << msg << "\n";
	}*/
		
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
