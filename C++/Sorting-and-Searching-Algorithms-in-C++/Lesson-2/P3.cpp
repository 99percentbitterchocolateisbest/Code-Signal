/*
Welcome to this Binary Search challenge! Your task is to complete the missing sections of a Binary Search implementation. This clever algorithm allows you to efficiently locate a target number within a sorted list by dividing and conquering. Be sure to stop the recursion when needed and accurately comparing values at each step. Good luck!
*/

#include <iostream>
#include <vector>

int BinarySearch(const std::vector<int>& numbers, int start, int end, int target) {
    // Base case: if the search space is invalid
    if (start > end) {
        return -1; // Target not found
    }

    int mid = start + (end - start) / 2;

    if (numbers[mid] == target) {
        return mid; // Number found
    } else if (numbers[mid] < target) {
        // Search in the right half
        return BinarySearch(numbers, mid + 1, end, target);
    } else {
        // Search in the left half
        return BinarySearch(numbers, start, mid - 1, target);
    }
}

int main() {
    std::vector<int> sortedArray = {1, 3, 5, 7, 9, 11};
    int numberToFind = 7; // Number we want to find
    int result = BinarySearch(sortedArray, 0, sortedArray.size() - 1, numberToFind);
    std::cout << "The number " << numberToFind << " is at index: " << result << std::endl;
    return 0;
}