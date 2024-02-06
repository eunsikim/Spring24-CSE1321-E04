
#include <iostream>

using namespace std;

int main() {
    char ans1;
    char ans2;

    cout << "Does the animal have feathers (Y/N): ";
    cin >> ans1;

    switch (ans1){
        case 'Y':
            cout << "Can the animal fly (Y/N): ";
            cin >> ans2;

            switch(ans2){
                case 'Y':
                    cout << "Hawk" << endl;
                    break;
                case 'N':
                    cout << "Penguin" << endl;
            }
            break;

        case 'N':
            cout << "Does the animal have fins (Y/N): ";
            cin >> ans2;

            switch(ans2){
                case 'Y':
                    cout << "Dolphin" << endl;
                    break;
                case 'N':
                    cout << "Bear" << endl;
            }
            break;
    }

    return 0;
}
