#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    for (int i = 0; i < 5; i++){
        cout << "Iteration #" << (i + 1) << endl;
        for (int o = 0; o < 6; o++)
        {
            cout << "\tIteration #" << (o + 1) << endl;
        }
        
    }
    cout << count;
}
