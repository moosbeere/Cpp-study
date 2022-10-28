// RegExp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<regex>
#include<string>
using namespace std;

bool isHaveLink(string s) {
    regex reg("https?://[a-z0-9].*?\.[a-z]{2,4}", regex_constants::icase);
    return regex_search(s, reg);
}

bool isValidEmail(string s) {
    regex reg("^[a-z0-9_][a-z0-9_\.-]+[a-z0-9]@([a-z]+[a-z0-9_-]*[a-z]\.)+[a-z]{2,4}$", regex_constants::icase);
    return regex_search(s, reg);
}

int main()
{
    setlocale(LC_ALL, "");
    string s1 = "Немного поспамлю свой сайт http://mysite_1AA.ru, хах";
    string s2 = "Хорошее предложение с элементами ссылки http и такими .ru 13";
    if (isHaveLink(s1)) cout << s1 << endl;
    if (isHaveLink(s2)) cout << s1<<endl;

    string mail1 = "Myemail@";
    string mail2 = "myemail@krovatka.bk.mail.ru";
    if (isValidEmail(mail1)) cout << mail1 << endl;
    if (isValidEmail(mail2)) cout << mail2 << endl;

    string str = "Вчера нашел 50 рублей на лавкее и 15 под ней";
    regex reg("(\\d+).");
    cout << regex_replace(str, reg, "$1.00") << endl;

    string text = "Набрал 97 баллов, вместо 100, но мог бы набрать 80 баллов, поэтому лучше 97 баллов";

    smatch matches;
    while (regex_search(text,matches, reg ))
    {
        cout << matches[0] << endl;
        cout << matches[1] << endl;
        text = matches.suffix().str();
        cout << text << endl;
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
