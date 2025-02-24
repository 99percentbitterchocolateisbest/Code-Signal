/*
Imagine you are an analyst working with two sets of documents, each an array of strings. Your goal is to identify the unique strings from the second document that have an anagram match in the first document and calculate the sum of their lengths as an integer. Anagrams are words formed by rearranging the letters of another. If no anagram is found or the string isn't unique, move on. Implement this solution efficiently to handle both small and large sets of documents.
*/

#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>

inline std::string SortCharacters(const std::string& input) {
    std::string sorted = input;
    std::sort(sorted.begin(), sorted.end());
    return sorted;
}

int FindAnagrams(const std::vector<std::string>& report1, const std::vector<std::string>& report2) {
    std::unordered_set<std::string> sortedWordsInReport1;
    // TODO: fill in sortedWordsInReport1
    for(auto& x : report1){ 
        sortedWordsInReport1.insert(SortCharacters(x));
    }
    std::vector<std::string> report;
    for(auto& x : report2){ 
        report.push_back( SortCharacters(x));
    }

    std::unordered_set<std::string> anagramsMatched;
    int lengthSum = 0;

    for (const auto& word : report) {
        // implement this
        if(std::find(sortedWordsInReport1.begin(),sortedWordsInReport1.end(),word) != sortedWordsInReport1.end()){
            lengthSum +=word.length();
            anagramsMatched.insert(word);
        }
    }

    return lengthSum;
}

int main() {
    std::vector<std::string> report1 = {"cat", "dog", "tac", "god", "act"};
    std::vector<std::string> report2 = {"tca", "ogd", "atc", "taco"};
    int result = FindAnagrams(report1, report2);
    std::cout << result << std::endl; // output: 9

    // additional test samples
    std::vector<std::string> report3 = {"rat", "tar", "bat", "tab", "bats"};
    std::vector<std::string> report4 = {"tra", "art", "abr"};
    int result2 = FindAnagrams(report3, report4);
    std::cout << result2 << std::endl;  // output: 6

    return 0;
}