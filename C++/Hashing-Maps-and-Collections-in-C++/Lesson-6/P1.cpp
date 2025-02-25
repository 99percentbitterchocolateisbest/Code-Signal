/*Imagine you are developing a smart library system. You're tasked with evaluating a list of check-out events, each represented by a unique identifier number for the library books. Occasionally, a particular book might be checked out more frequently, precisely more than n/4 times, where n is the total number of check-out events. If such a book exists, your task is to print its identifier. Non-negative integers represent the identifiers, but ignore the cases when an identifier is zero. If no such frequent check-out book is found, the system should return -1. Get ready to dive into the data and uncover any recurring favorites among readers!*/

#include <iostream>
#include <unordered_map>
#include <vector>

int FrequentBook(const std::vector<int>& checkOuts) {
    std::unordered_map<int, int> countMap;
    int frequentCheckOutThreshold = checkOuts.size() / 4;

    // TODO: Implement the solution to return the frequently checked out book identifier
    for(auto& x : checkOuts){
        countMap[x]++;
        if (countMap[x] > frequentCheckOutThreshold) {
            return x;
        }
    }
    return -1;
}

int main() {
    std::vector<int> checkOuts1 = {1, 2, 3, 1, 2, 3, 1, 2, 3, 1};
    std::cout << "Frequent Book: " << FrequentBook(checkOuts1) << std::endl;  // Expected output: 1

    std::vector<int> checkOuts2 = {5, 0, 5, 0, 5, 0, 5, 0, 1, 1, 1, 1, 1};
    std::cout << "Frequent Book: " << FrequentBook(checkOuts2) << std::endl;  // Expected output: 5

    std::vector<int> checkOuts3 = {3, 2, 2, 1, 3, 2, 3, 0, 0, 1, 4, 1};
    std::cout << "Frequent Book: " << FrequentBook(checkOuts3) << std::endl;  // Expected output: -1
    return 0;
}