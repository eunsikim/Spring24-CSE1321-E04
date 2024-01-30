
#include <iostream>

using namespace std;

int main() {
    string word1 = "eun sik";
    string word2 = "Eun SiK asdadgtj";

    // Check if word1 is equal to word2, if equal is 0 if not is 1
    if(word1.compare(word2) == 0){
        cout << word1 << " is equal to " << word2 << endl;
    }
    else{
        cout << word1 << " is NOT equal to " << word2 << endl;
    }

    return 0;
}
