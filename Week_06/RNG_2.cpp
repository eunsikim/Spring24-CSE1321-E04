#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
    srand((unsigned)time(0));
    int randomNumber;
    // Generate random integers in range 5 to 10
    for(int i = 0; i < 10; i++){
        randomNumber = (rand() % 5 + 1) + 5;
        cout << randomNumber << endl;
    }

}