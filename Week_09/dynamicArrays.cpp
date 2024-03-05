#include <iostream>

using namespace std;

int main()
{
    /**
     *  For a "Dynamic" sized 1-D Array  
    */
    int size;

    // ...your size input code...

    // Initialize your array
    int* array1D = new int[size];

    /**
     *  For a "Dynamic" sized 2-D Array  
    */

    int row;
    int col;

    // ...your row and col size input code...

    // Initialize a 1-D array
    int** array2D = new int*[row];
    // Insert another 1-D array into each cell of the array above
    for(int i = 0; i < col; i++){
        array2D[i] = new int[col];
    }
}
