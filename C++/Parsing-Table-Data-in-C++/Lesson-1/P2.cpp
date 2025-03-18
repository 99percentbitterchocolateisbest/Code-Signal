/*
Currently, no data input is necessary; your objective is to set up a 2D vector to store integer values, initialize it with zeros, and print it. Here’s how to get started:

    Create a 2D vector with 3 rows and 5 columns, initialized to zero.
    Use nested loops to print the 2D vector, ensuring it outputs a 3x5 grid filled with zeros.

*/

#include <iostream>
#include <vector>

int main() {
    // TODO: Initialize a 3x5 2D vector with zeros
    std::vector<std::vector<int>> x(3, std::vector<int>(5, 0));

    // TODO: Output the 2D vector to verify it is filled with zeros
    for(std::vector y : x){
        for(int z : y) std::cout << z << " ";
        std::cout<< '\n';
    }

    return 0;
}