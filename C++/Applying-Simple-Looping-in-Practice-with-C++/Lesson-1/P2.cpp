/*
You are provided with a list of n integers, where n ranges from 2 to 200, inclusive. The task is to return a list of pairs, each containing an integer and its reverse counterpart.

In this context, the reverse counterpart of a number is the number with its digits reversed. For example, the reverse counterpart of 123 is 321.

You must iterate through the list to find the reverse counterpart for each integer. If this reversed number exists in the list, create a pair with the original number and its reverse counterpart. If not, skip it.

Your output should be a list of pairs with the original integers and their reverse counterparts. The integers in the given list will range from 10 to 9999, inclusive, and each integer in the list is unique.

Note: The reverse counterpart of a single digit number is the same number. For numbers that result in leading zeros when reversed (e.g., 100 becomes 001, which is 1), consider only the integer value (i.e., 1). 

It's guaranteed that the original list will not contain integers with leading zeros.

For example, for numbers = {12, 21, 34, 43, 56, 65}, the output should be solution(numbers) = {{12, 21}, {21, 12}, {34, 43}, {43, 34}, {56, 65}, {65, 56}}.
*/




#include <vector>
#include <unordered_set>

int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

std::vector<std::pair<int, int>> solution(const std::vector<int>& numbers) {
    std::vector<std::pair<int, int>> result;
    std::unordered_set<int> numSet(numbers.begin(), numbers.end());
    
    for (int num : numbers) {
        int reversed = reverseNumber(num);
        if (numSet.find(reversed) != numSet.end()) {
            result.push_back({num, reversed});
        }
    }
    
    return result;
}