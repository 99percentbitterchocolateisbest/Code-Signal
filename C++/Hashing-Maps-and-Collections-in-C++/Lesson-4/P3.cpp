/*It's time to explore the world of std::unordered_map, Developer! Your task is to create an inventory system for an online bookstore. Utilize your expertise with std::unordered_map to map book ISBNs to their titles, add several books to the inventory, and then display the entire collection.

Next, remove a book of your choice and show the remaining inventory. Let's get coding!*/

#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    // TODO: Create an unordered_map with std::string as the key type and std::string as the value type
    std::unordered_map<std::string, std::string> x;

    // TODO: Add at least three books to the inventory with their ISBN and title
    // Examples: ("978-0-262-03384-8", "Introduction to Algorithms"), ("978-0-13-110362-7", "The C Programming Language"), ("978-0-201-63361-0", "Design Patterns")
    x["978-0-262-03384-8"] = "Introduction to Algorithms";
    x["978-0-13-110362-7"] = "The C Programming Language";
    x["978-0-201-63361-0"] =  "Design Patterns";
    

    // TODO: Display the entire bookstore inventory
    for (auto& o : x) {
        std::cout<< o.first << ' ' << o.second << '\n';
    }

    // TODO: Remove a book from the inventory
    x.erase("978-0-201-63361-0");

    // TODO: Display the updated bookstore inventory
    for (auto& o : x) {
        std::cout<< o.first << ' ' << o.second << '\n';
    }


    return 0;
}