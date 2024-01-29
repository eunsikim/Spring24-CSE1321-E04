
#include <iostream>

int main() {
    // Define the size of the shape
    int size = 4; // You can change this value to adjust the size of the shape

    // Loop to print the shape
    for (int i = 1; i <= size; ++i) {
        // Print stars
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }

        // Print underscores
        for (int k = 1; k <= size - i; ++k) {
            std::cout << "_";
        }

        // Move to the next line after each row
        std::cout << std::endl;
    }

    return 0;
}
