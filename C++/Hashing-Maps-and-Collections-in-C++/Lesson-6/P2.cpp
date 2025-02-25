/*Your mission is to catalog words from a given sentence using C++. We'll utilize std::unordered_map to associate each distinct word with its frequency of occurrence.

Your task is to develop a function that takes a sentence (a string of English words separated by spaces) and outputs an std::unordered_map<std::string, int>. In this unordered_map, each key should be a unique word (ignoring case), paired with a value representing the number of times it appears.

Dive in and start coding!*/

#include <cctype>
#include <iostream>
#include <sstream>
#include <unordered_map>
#include <string>


std::unordered_map<std::string, int> CreateWordIndex(const std::string& sentence) {
    std::unordered_map<std::string, int> index;
    std::istringstream iss(sentence);
    std::string word;
    while (iss >> word) {
        // TODO: Implement this
        for(auto&x : word){ x = std::tolower(x); }
        
        index[word]++;
    }
    return index;
}

int main() {
    std::string sentence1 = "Hello Hello world world world";
    auto index1 = CreateWordIndex(sentence1);
    for (const auto& kvp : index1) {
        std::cout << "(" << kvp.first << " -> " << kvp.second << ")\n"; // Should print: (hello -> 2), (world -> 3)
    }
    std::cout << "----\n";

    std::string sentence2 = "";
    auto index2 = CreateWordIndex(sentence2);
    for (const auto& kvp : index2) {
        std::cout << "(" << kvp.first << " -> " << kvp.second << ")\n"; // Should print nothing as the sentence is empty.
    }
    std::cout << "----\n";

    std::string sentence3 = "Quick Quick brown fox jumps over the lazy dog";
    auto index3 = CreateWordIndex(sentence3);
    for (const auto& kvp : index3) {
        std::cout << "(" << kvp.first << " -> " << kvp.second << ")\n"; 
        // Should print: (quick -> 2), (brown -> 1), (fox -> 1), (jumps -> 1), (over -> 1), (the -> 1), (lazy -> 1), (dog -> 1)
    }
    std::cout << "----\n";

    return 0;
}