/*
You are given an array of n integers, where n ranges from 2 to 200, inclusive. The elements in the array range from -200 to 200, inclusive. Your task is to return a vector where 

each element is the sum of a pair composed of an element and its 'opposite' element.

By 'opposite', we mean that in a vector of n elements, the first and last elements are paired, the second and second-to-last elements are paired, and so on. 

If the vector is of odd length, the middle element pairs with itself.

The function should handle both positive and negative integers and be capable of dealing with an odd number of elements in the list.

For example, given an input vector {1, 2, 3, 4, 5}, your function should return {6, 6, 6}. 

This is because the first element 1 plus the last element 5 equals 6, the second element 2 plus 

the second-to-last element 4 equals 6, and the middle element 3 plus itself equals 6.
*/


#include <vector>

std::vector<int> solution(const std::vector<int>& numbers) {
    // TODO: Implement solution here
    std::vector<int> ans;
    int n = numbers.size();
    for (int i = 0; i < n /2; i++) {
        ans.push_back((numbers[i] + numbers[n - i -1]));
    }
    if(n % 2 == 1){
        ans.push_back(2 * numbers[n / 2]);
    }
    return ans;
}