// ReadWrite.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    setlocale(LC_ALL, "");
    std::fstream fs;
    fs.open("a.txt", std::ios::out);
        fs << "12 стульев\n20 столов";
        fs.close();

        fs.open("a.txt", std::ios::in);
        std::string str;
        fs >> str;
        std::cout << str << std::endl;
        fs.close();
        fs.open("a.txt", std::ios::in);
        std::string data;
        std::string line;
        while (getline(fs, line)) {
            data += line + "\n";
        }
        fs.close();
        std::cout << data;
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
