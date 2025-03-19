/*Your task is to modify the CountEvenDigits function to only count the even digits. Use conditional checks and recursion to accomplish this task.*/

#include <iostream>

// Function to count the number of digits in a number using recursion
int CountDigits(int num) {
    if (num == 0) {
        return 0;
    } else {
        // Recursive case: reduce the number by dividing by 10 and count the rest
        // TODO: Count only the even numbers
        if(num % 2 == 0) return 1 + CountDigits(num / 10);
        else return CountDigits(num / 10);
    }
}

int main() {
    std::cout << "The number of digits in the 'diameter of Mars': " << CountDigits(7623) << std::endl;
    return 0;
}