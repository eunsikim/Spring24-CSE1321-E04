#include <iostream>
#include <string>
#include <windows.h> // Use this if you use Windows
//#include <unistd.h> // Use this if you have a Mac/Linux


using namespace std;

int main()
{
    string word = "Hello World";

    // Print the string you want to "erase"
    // Make sure it does not have a "\n" or endl
    cout << word;


    cout << "\b \b";
    Sleep(1000);
    cout.flush();

}
