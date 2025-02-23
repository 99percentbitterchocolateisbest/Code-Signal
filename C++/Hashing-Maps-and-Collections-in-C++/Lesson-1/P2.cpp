/*
In this task, you're going to create a C++ program to handle a unique set of product IDs using std::unordered_set. Imagine adding product IDs, ensuring no duplicates make it through, and then showing how many unique IDs you have. Your coding adventure awaits - best of luck!
*/

#include <iostream>
#include <unordered_set>

int main() {
    // TODO: Instantiate an unordered_set to store unique product IDs
    std::unordered_set<int> x;
    // TODO: Add two different product IDs to your unordered_set and try adding one of them again
    x.insert(12);
    x.insert(11);
    x.insert(11);
    // TODO: Display the number of unique products
    std::cout<< x.size() << std::endl;
    return 0;
}