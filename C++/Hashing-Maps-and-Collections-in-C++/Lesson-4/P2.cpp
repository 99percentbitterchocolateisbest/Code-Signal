/*Expand your understanding of std::unordered_map in C++! Your task is to complete the following code:

    Create an unordered_map to represent the movie collection.
    Add two new key-value pairs representing your favorite movies and their release years to this collection.

This will help you solidify your understanding of using std::unordered_map to manage a collection of data.*/

#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    // TODO: Create an unordered_map for the movie collection
    std::unordered_map<std::string, int> movies;
    // Adding key-value pairs for MovieName-ReleaseYear
    movies["Inception"] = 2010;
    // TODO: Add any other movies to the movie collection along with their release year
    // Examples: (The Matrix, 1999), (Interstellar, 2014)
    movies["Slave Trade In The World Today"] = 1964;
    movies["Mondo Cane"] = 1962;

    // Display the release year of "Inception"
    std::cout << movies["Inception"] << std::endl;

    return 0;
}