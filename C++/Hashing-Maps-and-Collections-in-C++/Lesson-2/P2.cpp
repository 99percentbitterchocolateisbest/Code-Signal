/*
Imagine you have a collection of user IDs, much like a mailing list filled with duplicate entries. Your task is to write a C++ program that receives this collection and outputs a list containing only unique user IDs. Consider it as organizing a guest list where each guest should only appear once.

This method should efficiently handle both empty lists and lists with many duplicates. Ready to sort out the duplicates?
*/

#include <iostream>
#include <vector>
#include <unordered_set>

std::vector<int> ProcessUserIds(const std::vector<int>& userIds) {
    std::unordered_set<int> userSet(userIds.begin(),userIds.end());
    
    // TODO: Insert each userId into the userSet

    std::vector<int> result(userSet.begin(),userSet.end());

    // TODO: Populate the result vector with unique IDs

    return result;
}

int main() {
    std::vector<int> userIds = {1, 2, 3, 2, 1, 5, 3, 1, 2, 1, 4, 5, 6};
    std::vector<int> uniqueUserIds = ProcessUserIds(userIds);
    for (size_t i = 0; i < uniqueUserIds.size(); ++i) {
        std::cout << uniqueUserIds[i];
        if (i != uniqueUserIds.size() - 1) {
            std::cout << ", ";
        }
    }
    return 0;
}