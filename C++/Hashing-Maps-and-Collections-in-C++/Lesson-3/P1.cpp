/*
Imagine you have a list of words, each completely unique at first glance. But, as you browse through this list, your mission is to find the first word that actually appears more than once. If every word is unique, or the list happens to be empty, simply return an empty string. Ensure the solution provides the duplicated word or an empty string as a result if no duplicate exists. Get ready, seeker!
*/

#include <iostream>
#include <unordered_set>
#include <vector>
#include <string>

std::string FindFirstDuplicateWord(const std::vector<std::string>& words) {
    std::unordered_set<std::string> wordSet;

    // TODO: Find the word that appears more than once and return it
    for (const auto& word : words)
    {
        if (wordSet.find(word) != wordSet.end())
        {
            return word;
        }

        else
        {
            wordSet.insert(word);
        }
    }
    // Return an empty string if no duplicate words are found
    return "";
}

int main() {
    std::cout << FindFirstDuplicateWord({"apple", "banana", "cherry", "banana", "durian", "cherry"}) << std::endl; // Expected "banana"
    std::cout << FindFirstDuplicateWord({"pear", "grape", "pear", "orange"}) << std::endl; // Expected "pear"
    std::cout << FindFirstDuplicateWord({"kiwi", "mango", "kiwi", "melon"}) << std::endl; // Expected "kiwi"
    return 0;
}