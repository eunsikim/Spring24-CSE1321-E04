
#include <iostream>

using namespace std;

int main() {

    int choice = 5;

    switch(choice){
        case 0:
            cout << "You chose 0" << endl;
            break;
        case 1:
            cout << "You chose 1" << endl;
            break;
        case 2:
            cout << "You chose 2" << endl;
            break;
        default:
            cout << "That option is unknown" << endl;
    }

    return 0;
}
