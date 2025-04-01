/*
In this task, you will implement an iterative binary search function in C++. Your goal is to complete the missing parts of the code, directing the search process effectively. You should identify the middle element, adjust the search range appropriately, and return the correct index or indicator for the absence of the target. Good luck with this challenge and enjoy the problem-solving journey!
*/


#include <iostream>
#include <vector>

int FindNumber(const std::vector<int>& arr, int targetNumber) {
    int start = 0;
    int end = arr.size() - 1;
        
    while (start <= end) {
        int mid = start + (end - start) / 2; // Calculate the middle index

        if (arr[mid] == targetNumber) {
            return mid; // Number found at index mid
        } else if (arr[mid] < targetNumber) {
            start = mid + 1; // Search in the right half
        } else {
            end = mid - 1; // Search in the left half
        }
    }
    
    return -1; // Number not found
}

int main() {
    std::vector<int> sortedArray = {3, 7, 10, 20, 35, 40, 52, 60, 75};
    int targetNumber = 20;
    std::cout << "Number found at index: " << FindNumber(sortedArray, targetNumber) << std::endl;
    return 0;
}
