// Купуч.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <regex>
using namespace std;

bool isValidName(string name) {
    regex reg("^[A-Z]{1,1}[a-z]{1,32}$");
    return regex_search(name, reg);
}



int main()
{
   /* string str;
    cout << "Please introduce your self!\n";
    cin >> str;
    if (isValidName(str)) cout << "You entered a valid name!";
    else cout << "You entered an invalid name!";
    */

    string text = "Just e'mail: moosbeere_O@mail.ru and W..a@mail.com.ru and moosbeere@mail.ru.vom.zet";
    //string text = "moosbeere_O@mail.ru and W..a@mail.com.ru moosbeere@mail.ru.vom.zet";
    regex reg("[a-z0-9_\.]*[a-z0-9]@[a-z0-9\.]{2,}[a-z0-9]{2,6}", regex_constants::icase);
    smatch matches;
    while (regex_search(text, matches, reg)) {
        cout << matches[0]<<"\n";
        text = matches.suffix().str();
    };
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
