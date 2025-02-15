/*
Your task is to construct a function that accepts an integer n and returns the integer with the same digits as n, but in reverse order. You should implement your solution using a while loop.

For instance, if the input is 12345, the output should be 54321.

Keep in mind that n will always be a positive integer between 11 and 108108.

Do not use built-in functions that convert the integer to another data type, such as a string, to reverse it. 

Solve the problem purely using mathematical operations and loop constructs. Note that when the result has leading zeros, you should consider only the integer value (e.g., 1230 becomes 321 after the operation).
*/

#include <vector>
#include <cmath>

int solution(int n) {
    // TODO: implement the solution here
    std::vector <int> x;
    int size = 0;
    int res = 0;
    if(n%10 == 0){
        n = n/10;
    }
    while(n > 9){
        x.push_back(n%10);
        size++;
        n = n / 10;
        
    }
    x.push_back(n);
    
    for(int i = 0; i< x.size(); i++){
        res += x[i] * std::pow(10, size-i);
    }
    
    
    
    return res; // Placeholder return
}