#include <iostream>

using namespace std;

class phone
{
private:
    string color;
    string model;
    string year;

public:
    // Default Constructor
    phone()
    {
        color = "white";
        model = "Apple";
        year = "2024";
    }

    // Overloaded Constructor
    phone(string color, string model, string year)
    {
        this->color = color;
        this->model = model;
        this->year = year;
    }

    void play(string gameName)
    {
        cout << "Opening " << gameName << endl;
    }
    void call(string number)
    {
        cout << "Calling " << number << endl;
    }

    string getColor(string perms)
    {
        if (perms == "iuashdkfh38r324")
        {
            return color;
        }
        return "Action not Valid";
    }
    void setColor(string newColor, string perms)
    {
        if (perms == "iuashdkfh38r324")
        {
            color = newColor;
        }
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
    // phone stock[10];

    phone p1("black", "Samsung", "2022");

    cout << p1.getColor("iuashdkfh38r324") << endl;

    p1.setColor("red", "uhuisfksdjn");

    cout << p1.getColor("iuashdkfh38r324") << endl;

    // // cout << stock[0].model << " " << stock[0].year << " " << stock[0].color << endl;

    // stock[1] = phone();

    // stock[0].model = "Hello World";

    // // cout << stock[0].model << " " << stock[1].year << " " << stock[1].color << endl;

    // for (phone p : stock)
    // {
    //     cout << p.model << " " << p.year << " " << p.color << endl;
    // }
}