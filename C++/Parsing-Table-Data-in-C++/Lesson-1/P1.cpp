/*
In this task, you'll be working with a file containing a 3 x 5 matrix of integers. Your objective is to open this file, read only the first line of the matrix, store it in a one-dimensional vector, and then print the contents of that vector.

Here are the steps you'll need to follow:

    Open the file using std::ifstream.
    Use a loop to read the first line into a 1D vector.
    Print the vector's contents.

*/

#include <iostream>
#include <fstream>
#include <vector>

int main() {
    std::ifstream file("students_marks.txt"); // Open the file
    std::vector<int> firstLine(5); // Initialize a vector to store the first line (5 elements)

    // TODO: Read the first line into the vector using >> operator
    for(int i =0 ; i<5 ; i++){
        file >> firstLine[i];
    }

    // TODO: Print the vector contents
    for(int x : firstLine){
        std::cout<< x << '\n';
    }
    return 0;
}