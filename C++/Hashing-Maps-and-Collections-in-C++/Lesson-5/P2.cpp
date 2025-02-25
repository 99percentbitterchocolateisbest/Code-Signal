/*Let's dive into C++! We have an std::unordered_map that holds each unique product sold in a store and its quantity. Each product key is a unique string, and its quantity is represented by an integer value. Your task is to calculate the total quantity of all the products stocked in this store and return it as an integer.

Don't fret, you’ve got this! The std::unordered_map you receive as input will be straightforward, containing only products and their quantities. So, prepare your coding skills, plunge into C++, and enjoy the challenge! */

#include <iostream>
#include <unordered_map>
#include <string>

int getTotalQuantity(const std::unordered_map<std::string, int>& inventory) {
    // TODO: Implement this
    int res=0;
    for(auto& x: inventory){
        res+=x.second;
    }
    return res;
}

int main() {
    std::unordered_map<std::string, int> inventory = {
        {"Apples", 50},
        {"Bananas", 100},
        {"Oranges", 75}
    };
    std::cout << getTotalQuantity(inventory) << std::endl;  // It should print 225

    std::unordered_map<std::string, int> anotherInventory = {
        {"Pizzas", 20},
        {"Burgers", 30},
        {"Tacos", 50}
    };
    std::cout << getTotalQuantity(anotherInventory) << std::endl;  // It should print 100

    std::unordered_map<std::string, int> emptyInventory;
    std::cout << getTotalQuantity(emptyInventory) << std::endl;  // It should print 0

    return 0;
}