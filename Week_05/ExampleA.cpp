
#include <iostream>

using namespace std;

int main() {
    string ans1;
    string ans2;

    cout << "Does the animal have feathers (Y/N): ";
    cin >> ans1;

    if(ans1 == "Y"){
        cout << "Can the animal fly (Y/N): ";
        cin >> ans2;
        if(ans2 == "Y"){
            cout << "Hawk" << endl;
        }
        else{
            cout << "Penguin" << endl;
        }
    } 
    else{
        cout << "Does the animal have fins (Y/N): ";
        cin >> ans2;
        if(ans2 == "Y"){
            cout << "Dolphin" << endl;
        }
        else{
            cout << "Bear" << endl;
        }
    }
    

    return 0;
}
