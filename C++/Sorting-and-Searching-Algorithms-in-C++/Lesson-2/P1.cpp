/*
Put your skills to the test by modifying the BinarySearch function. Your goal is to adjust it so that it provides the insertion index if the target isn't found in a sorted list.

The insertion index is the position at which the target can be inserted while maintaining the sorted order of the list. Modify the return logic to accommodate this, and adjust the output message accordingly. The main function also needs to be modified to handle and display the insertion index when the target is not found.
*/

#include <iostream>
#include <vector>

int BinarySearch(const std::vector<int>& arr, int start, int end, int target) {
    if (start > end) return start; // Base case: return insertion index
    int mid = start + (end - start) / 2; // Find the midpoint
    if (arr[mid] == target) return mid; // Target found
    if (arr[mid] > target) // If the target is less than the midpoint
        return BinarySearch(arr, start, mid - 1, target); // Search the left half
    return BinarySearch(arr, mid + 1, end, target); // Search the right half
}

// Example usage
int main() {
    std::vector<int> numbers = {1, 3, 5, 6, 9, 12, 15, 18, 21};
    int searchNumber = 14;
    int targetIndex = BinarySearch(numbers, 0, numbers.size() - 1, searchNumber);
    
    // Check if the target was found or if we need to display the insertion index
    if (targetIndex < numbers.size() && numbers[targetIndex] == searchNumber) {
        std::cout << "Number " << searchNumber << " is at index: " << targetIndex << std::endl;
    } else {
        std::cout << "Number " << searchNumber << " not found. It can be inserted at index: " << targetIndex << std::endl;
    }
    
    return 0;
}
