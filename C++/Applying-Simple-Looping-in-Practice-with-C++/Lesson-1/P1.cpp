/*
You are given an input array consisting of n integers ranging from 0 to 100, inclusive, where n represents the length of the array. Your task is to write a function that returns a new array of pairs. Each pair should consist of an element from the input array paired with its geometrical mean with the 'opposite' element. The 'opposite' element of any element in the array is defined as the element at the corresponding position from the end of the array.

Assume that the geometrical mean of two numbers, a and b, is calculated as: a⋅ba⋅b

​.

A few notes:

    If the length of the array, n, is odd, the middle element is considered to be its own 'opposite'.
    The elements of the input array will be in the range from 00 to 100100, inclusive.
    Calculate the geometrical mean to two decimal places. For example, the geometrical mean of 22 and 88 is 4.004.00 (since 2⋅8=42⋅8​=4).

For example, for numbers = [1, 2, 3, 4, 5], the output should be solution(numbers) = [{1, 2.24}, {2, 2.83}, {3, 3.00}, {4, 2.83}, {5, 2.24}].
*/


#include "solution.hpp"
#include <vector>
#include <cmath>

std::vector<std::pair<int, double>> solution(const std::vector<int>& numbers) {
    // TODO: implement this function
    std::vector<std::pair<int, double>> sol;
    int n = numbers.size();
    for(int i = 0; i<n;i++){
        sol.push_back({numbers[i], std::round(std::sqrt(numbers[i]* numbers[n-1-i]) * 100) / 100});
    }
    
    
    return sol;
}