#include <iostream>

using namespace std;

// f(x) = x^2
double square(double x){
    double calculation = x * x;
    return calculation;
}

void bark(){
    cout << "Woof Woof" << endl;
}

// Overloaded functions: same function name, different parameters
void print(int action, string word){
    cout << "* " << word << endl;
}
void print(string word, int x){
    cout << "- " << word << endl;
}

void printStrArray(string array[], int len){
    for(int i = 0; i < len; i++){
        print(array[i], 3);
    }
}

int main(){
    double someVariable = square(5);

    cout << someVariable << endl;
    
    bark();

    string words[2] = {"hello", "world"};

    printStrArray(words, 2);


    // Side note
    // You can cast integers into characters
    cout << (char) 103 << endl; // g
    // And integers into characters
    cout << (int) 'g' << endl; // 103
}
