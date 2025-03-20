#include <iostream>

// Recursive function to calculate the sum of digits of a number
int CountStars(int number) {
    // TODO: Add the base case
    // TODO: Add the recursive logic to sum up the digits of 'number'
    if(number < 10){
        return number;
    }else return (number % 10) + CountStars(number / 10);  
    return 0;
}

int main() {
    std::cout << CountStars(4042) << std::endl; // Will print the sum of digits of the star code 4042
    return 0;
}