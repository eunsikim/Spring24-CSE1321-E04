#include <iostream>

using namespace std;

int main(){
    string w = "HELLO";

    // Finding the uppercase "L" 
    for(int i = 0; i < w.length(); i++){
        if(w.at(i) == 76){
            cout << "I found L at index: " << i << endl;
        }
    }

    // Printing the string char by char
    for(int i = 0; i < w.length(); i++){
        cout << w.at(i);
    }
}