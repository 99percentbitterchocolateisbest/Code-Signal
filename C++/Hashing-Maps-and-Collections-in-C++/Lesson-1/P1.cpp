/*
Determine if visitor3@example.com has ever visited our site using an std::unordered_set. Your goal is to print the result in a single line. This exercise will test your understanding of C++'s unordered_set. You've got this! Happy coding!
*/

#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<std::string> uniqueVisitors;

    // Simulated visits to the website
    uniqueVisitors.insert("visitor1@example.com");
    uniqueVisitors.insert("visitor2@example.com");
    uniqueVisitors.insert("visitor1@example.com"); // repeated visitor

    // TODO: Check presence of a visitor and print the result
    if (auto search = uniqueVisitors.find("visitor3@example.com"); search != uniqueVisitors.end())
        std::cout << "Found " << *search << '\n';
    else
        std::cout << "Not found\n";

    return 0;
}