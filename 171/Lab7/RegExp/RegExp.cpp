// RegExp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<regex>
using namespace std;

bool isHaveLink(string s) {
    regex reg("https?://[a-z0-9].*?\.[a-z]{2,4}", regex_constants::icase);
    return regex_search(s, reg);
}
bool isValidMail(string s) {
    regex reg("^[a-z][a-z0-9_-]+@([a-z][a-z0-9]+\.)+[a-z]{2,4}$", regex_constants::icase);
    return regex_search(s, reg);
}
int main()
{
    setlocale(LC_ALL, "");
    string s1 = "Немного поспамлю свой сайт http://My_site_dlkjfgekuf123_hello.ru, хаха";
    string s2 = "строка не содержит ссылку, а только ее элементы http, а также .ru, Mysite.ru ";

    if (isHaveLink(s1)) cout << s1 << endl;
    if (isHaveLink(s2)) cout << s2 << endl;

    string mail1 = "Mymail@";
    string mail2 = "Mymail@mail.bk.ru";
    if (isValidMail(mail1)) cout << mail1 << endl;
    if (isValidMail(mail2)) cout << mail2 << endl;

    string str = "Вчера нашел 50 рублей, а сегодня еще 15";
    regex reg("(\\d+).");
    cout << regex_replace(str, reg, "aa")<<endl;
    cout << regex_replace(str, reg, "$1.00 $2.88768")<<endl;

    string text = "Набрал 90 баллов из 100, но лучше бы набрал 99, хотя 90 тоже неплохо";
    smatch matches;
    while (regex_search(text, matches, reg)) {
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
