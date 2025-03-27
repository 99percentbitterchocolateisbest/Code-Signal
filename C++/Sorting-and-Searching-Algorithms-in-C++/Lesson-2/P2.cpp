/*You're on a mission to locate a mysterious item within a sorted array using the Binary Search algorithm in C++. However, there's an infinite recursion lurking within the code, and your task is to identify and fix it. Examine the recursive logic carefully to ensure it correctly halves the array as it searches. Pay special attention to the base condition and how the midpoint is handled. */

#include <iostream>
#include <vector>

int FindItemIndex(const std::vector<int>& values, int start, int end, int itemValue)
{
    if (start > end) return -1; // Base case: Item not found
    int mid = start + (end - start) / 2; // Find the midpoint
    if (values[mid] == itemValue) return mid; // Item found
    if (values[mid] > itemValue)
        return FindItemIndex(values, start, mid - 1, itemValue); // Check the left half
    return FindItemIndex(values, mid + 1, end, itemValue); // Check the right half
}

int main()
{
    std::vector<int> itemValues = {3, 7, 12, 19, 23, 31}; // Sorted array of item values
    int itemToFind = 3; // Value of the item to find
    std::cout << FindItemIndex(itemValues, 0, itemValues.size() - 1, itemToFind) << std::endl; // Outputs: 0
    return 0;
}
