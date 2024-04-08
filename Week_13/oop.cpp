#include <iostream>

using namespace std;

class phone
{
public:
    string color;
    string model;
    string year;

    // Constructor
    phone()
    {
        color = "white";
        model = "Apple";
        year = "2024";
    }

    phone(string color, string model, string year)
    {
        this->color = color;
        this->model = model;
        this->year = year;
    }

    void play(string gameName)
    {
        cout << "Opening " << gameName << endl;
        call("98654321");
    }
    void call(string number)
    {
        cout << "Calling " << number << endl;
    }
};

// toLower
string lower(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }

    return s;
}

int main()
{
    phone stock[10];

    stock[0] = phone("black", "Samsung", "2022");

    // cout << stock[0].model << " " << stock[0].year << " " << stock[0].color << endl;

    stock[1] = phone();

    stock[0].model = "Hello World";

    // cout << stock[0].model << " " << stock[1].year << " " << stock[1].color << endl;

    for (phone p : stock)
    {
        cout << p.model << " " << p.year << " " << p.color << endl;
    }
}