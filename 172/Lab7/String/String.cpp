// String.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

using namespace std;

void print(string s) {
    cout << s << endl;
}

void print(bool b) {
    cout << b << endl;
}

int main()
{
    setlocale(LC_ALL, " ");
    string s1 = "My string";
    string s2("My string second");
    string s3(4, 'a');
    cout << s1 << " " << s2 << " " << s3 << endl;
    
    cout << s1 + s2 + s3 << endl;
    print(to_string(s1.size()));

    print(s1 == s2);
    print(s3 > s1);
    print(s3.empty());
    print(string("").empty());

    int index = s1.find("str");
    print(to_string(index));

    index = s1.rfind("n");
    print(to_string(index));

    print(s1.substr(4));
    print(s1.substr(4, 3));
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
