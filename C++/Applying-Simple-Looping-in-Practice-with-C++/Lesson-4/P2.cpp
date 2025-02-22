/*
You are given an array of n integers, where n can range from 1 to 500, inclusive. Your task is to create a new array in which each element is a tuple, represented by a std::pair in C++, determined by pairing elements from the middle to both ends of the original array.

If the original array has an odd length, pair the middle element with 0. If the original array has an even length, start pairing from the two middle elements. Continue the pairing by alternating elements from the left and the right until all elements have been paired.

After creating the paired elements, return the new array of pairs. Ultimately, your result should be an array of std::pair<int, int>, each of size two. Each element within a pair, as well as within the array, can range from -1000 to 1000, inclusive.
*/

#include <vector>
#include <utility>

std::vector<std::pair<int, int>> solution(const std::vector<int>& numbers) {
    std::vector<std::pair<int, int>> result;
    int n = numbers.size();
    
    if (n == 0) {
        return result;
    }
    
    int mid = n / 2;
    
    if (n % 2 == 1) {
        result.push_back({numbers[mid], 0});
        
        int left = mid - 1;
        int right = mid + 1;
        
        while (left >= 0 && right < n) {
            result.push_back({numbers[left], numbers[right]});
            left--;
            right++;
        }
    }

    else {
        int left = mid - 1;
        int right = mid;
        
        while (left >= 0 && right < n) {
            result.push_back({numbers[left], numbers[right]});
            left--;
            right++;
        }
    }
    
    return result;
}
