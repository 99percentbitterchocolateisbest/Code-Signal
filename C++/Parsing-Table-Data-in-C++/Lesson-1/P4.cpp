/*our task is to complete a C++ program that reads a matrix from a file named students_marks.txt. This involves the following steps:

    Open the students_marks.txt file for reading using ifstream.
    Add error handling to make sure the file is open successfully.
    Use a 2D vector to store the matrix data from the file.
    Implement the code to read each matrix value into the vector.
    Print the contents of the matrix to verify it has been read correctly.
*/

#include <iostream>
#include <fstream>
#include <vector>

int main() {
    // TODO: Open the file named "students_marks.txt" for reading

    // TODO: Add error handling to check if the file is open successfully

    // TODO: Initialize a 4x4 2D vector to store the data

    // TODO: Read each value from the file into the 2D vector using nested loops

    // TODO: Output the 2D vector to verify the result
    
    std::ifstream file("students_marks.txt"); 
    if(!file){ std::cerr << "ERROR" << std::endl; return 1; }

    std::vector<std::vector<int>> data(4, std::vector<int>(4)); 

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            file >> data[i][j];
        }
    }

    for (const auto& row : data) {
        for (const auto& value : row) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }

    return 0;
    
}