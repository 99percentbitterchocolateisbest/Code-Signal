/*
 In this task, you are required to write a C++ function that takes a string as input and identifies all consecutive groups of identical pairs of characters within it. A group can be defined as a segment of the text where the same pair of characters is repeated consecutively.

Your function should return a string representing all the repeating character pairs and the number of their repetitions. For instance, if the input string is "aaabbabbababaca", your function should output: "aa1ab1ba1bb1ab2ac1a1". Note that if the length of the input string is odd, the last character is not paired with any other and is just added to the resulting string with repetition count 1.

Unlike in the lesson, the input strings for this task are guaranteed to consist only of lowercase alphabetic characters. The length of the string will not exceed 500 characters.

Can you develop such a program? Get set, go!
 */

#include <string>

std::string solution(const std::string &s) {
    std::string result;
    int i = 0;
    while (i < s.length()) {
        std::string pair;

        // Check if we have a complete pair
        if (i + 1 < s.length()) {
            pair = s.substr(i, 2);
            int count = 1;
            // Move to the next pair and check for consecutive repetition
            int j = i + 2;
            while (j + 1 < s.length() && s.substr(j, 2) == pair) {
                count++;
                j += 2;
            }
            result += pair + std::to_string(count);
            i = j; // Move index past this group
        } else {
            // Last character left alone
            result += s[i];
            result += '1';
            i++;
        }
    }
    return result;
}
