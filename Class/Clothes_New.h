#pragma once
    #include <iostream>
    #include "Enum.cpp"
    using std::string;
    struct User {
        int id;
        string login;
        int  password;
        void inConsol() {
            std::cout << id << "\n";
            std::cout << login << "\n";
            std::cout << password << "\n";
        }
    };


class Clothes_New
{
    friend class Characteristic;
public:
    Clothes_New(string name, int count, int size, Color color);
    Clothes_New();
    ~Clothes_New();
    string getName();
    int getCount();
    int getSize();
    void setCount(int count);
    string getColor();
    virtual string getText();
    operator string();
    bool operator > (Clothes_New m2);
    bool operator < (Clothes_New m2);

    private:
        string name;
        string color;
        int count;
        int size;
        Color enumColor;

        /* Clothes(string name, int count, int size) : name(name), count(count), size(size) {};*/

        bool maxCount(int count);

        int sum(Clothes_New& clothes);

        int sum(int count);

};

