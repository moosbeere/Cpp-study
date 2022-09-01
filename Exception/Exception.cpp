// Exception.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

enum class NumberError {
    NEGATIVE,
    BIG,
    ZERO
};

class Man {
private:
    int year;
public:
    Man(int year) :year(year) {};
    int getYear() {
        return this->year;
    }
};

class ManError : public exception {
private:
    NumberError code;
public:
    ManError(NumberError code) : code(code) {};
    const char* what() const throw() override {
        if (code == NumberError::NEGATIVE) return "Вы ввели отрицательное число!";
        else if (code == NumberError::BIG) return "Вы еще не родились";
        else if (code == NumberError::ZERO) return "Что-то не верится";
    }

};
int main()
{
    setlocale(LC_ALL, "rus");
    int number;
    cout << "Enter your year of birth: ";
        try {
            cin >> number;
            if (number < 0) throw ManError(NumberError::NEGATIVE);
            else if (number > 2022) throw ManError(NumberError::BIG);
            else if (number < 1850) throw ManError(NumberError::ZERO);
            else cout << "Спасибо!";
        }
        catch (ManError err) {
            cout << "Exception: " << err.what();
        }
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
