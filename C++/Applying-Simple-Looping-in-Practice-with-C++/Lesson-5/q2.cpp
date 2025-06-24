/*
 Your task is to write a C++ function that takes in a string and identifies all the consecutive groups of identical characters within it, with the analysis starting from the end of the string rather than from its beginning. A group is defined as a segment of the text where the same character is repeated consecutively.

Your function should return a vector of pairs. Each pair will consist of the repeating character and the number of its repetitions. For instance, if the input string is "aaabbcccdde", the function should output: { {'e', 1}, {'d', 2}, {'c', 3}, {'b', 2}, {'a', 3} }.

Note that the input string cannot be empty; in other words, it must contain at least one character, and its length must not exceed 500 characters. The return should also be in reverse order, starting from the group of repeated characters at the end of the string and moving backward.

Put your knowledge and skills into action to solve this reverse pattern identification puzzle!
 */

#include <vector>
#include <utility>
#include <string>

std::vector<std::pair<char, int>> solution(const std::string& s) {
    std::vector<std::pair<char, int>> result;

    int n = s.length();
    if (n == 0) return result; // Though the problem says it's not empty, safety check.

    int i = n - 1;
    while (i >= 0) {
        char current = s[i];
        int count = 1;

        // Move backward while the characters match
        while (i - 1 >= 0 && s[i - 1] == current) {
            --i;
            ++count;
        }

        result.push_back({current, count});
        --i;
    }

    return result;
}
