#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
    srand((unsigned)time(0));
    int randomNumber;
    // Generate random integers in range 0 to 9

    for(int i = 0; i < 5; i++){
        randomNumber = (rand() % 10001);
        cout << randomNumber << endl;
    }

}