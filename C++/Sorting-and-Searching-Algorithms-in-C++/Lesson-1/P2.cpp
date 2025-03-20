/* 
A significant error has surfaced in our planetary digit tally. Your mission is to identify the flaw hidden within the recursive function that's failing to count digits correctly. Delve into the code, uncover the error, and correct the count to restore accuracy to our terrestrial calculations.
 */

#include <iostream>

int countDigits(int num) {
    if (num < 10) {
        return 1;
    } else {
        return 1 + countDigits(num / 10); // Recursive operation to scan further digits
    }
}

int main() {
    std::cout << countDigits(9876) << std::endl;
    return 0;
}