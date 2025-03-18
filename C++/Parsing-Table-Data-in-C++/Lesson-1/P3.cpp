/*The given code contains a typo in the file name, which leads to incorrect results. Your objective is to modify the given code to include a mechanism that checks whether the file opens successfully.

Here's what you need to do:

    Check whether students_marks.txt opens successfully after attempting to open it.
    Provide an error message if the file cannot be accessed.
    Ensure the program terminates properly when encountering such an error.
*/

#include <iostream>
#include <fstream>
#include <vector>

int main() {
    std::ifstream file("student_marks.txt"); // Open the file
    // TODO: Check if the file was opened successfully, and print an error message if not
    if(!file){ std::cerr << "ERROR" << std::endl; return 1; }

    std::vector<std::vector<int>> data(4, std::vector<int>(4)); // Initialize a 4x4 2D vector

    // Read each value directly into the 2D vector
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            file >> data[i][j];
        }
    }

    // Output the 2D vector to verify the result
    for (const auto& row : data) {
        for (const auto& value : row) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}