/**
 * You are provided with an array of n integers, where n ranges from 1 to 500 and is always an odd number. The elements of the array span values from -10^6 to 10^6, inclusive. The goal is to return a new array constructed by traversing the initial array in a specific order, outlined as follows:
* Begin with the middle element of the array.
* For each subsequent pair of elements, alternate between taking two elements from the left and two elements from the right, relative to the middle. Take those two elements and place it to the back of the newly constructed array preserving the order of the elements in the pair.
* If fewer than two elements remain on either side, include all the remaining elements from that side.
* Continue this process until all elements of the array have been traversed.
For example, for array = [1, 2, 3, 4, 5, 6, 7], your function should return [4, 2, 3, 5, 6, 1, 7]. And for array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11], your function should return [6, 4, 5, 7, 8, 2, 3, 9, 10, 1, 11].  
 */

#include <vector>

std::vector<int> unusual_traversal(const std::vector<int>& array) {
    std::vector<int> result;
    
    // Find the middle index (n is always odd, so this is safe)
    int n = array.size();
    int mid = n / 2;
    
    // Start with the middle element
    result.push_back(array[mid]);
    
    int leftStart = mid - 2; // Start 2 positions to the left of middle
    int rightStart = mid + 1; // Start 1 position to the right of middle
    
    while (leftStart >= -1 || rightStart < n) {
        // Take up to 2 elements from the left
        for (int i = 0; i < 2; i++) {
            int leftIndex = leftStart + i;
            if (leftIndex >= 0) {
                result.push_back(array[leftIndex]);
            }
        }
        leftStart -= 2;
        
        // Take up to 2 elements from the right
        for (int i = 0; i < 2; i++) {
            int rightIndex = rightStart + i;
            if (rightIndex < n) {
                result.push_back(array[rightIndex]);
            }
        }
        rightStart += 2;
    }
    
    return result;
}