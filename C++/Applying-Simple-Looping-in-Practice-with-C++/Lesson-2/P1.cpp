/*
You are given an integer n where n ranges from 1 to 10^8, inclusive. 

Your task is to write a function that calculates and returns the product of the odd digits of n, without converting n into a string.

For example, if n equals 43172, the output should be 21, because the product of the odd digits 3, 1, and 7 is 21.

Please note that if n has no odd digits, your function should return 0.

You are expected to solve this task by using a while loop. Good luck!
*/


int solution(int n) {
    // TODO: implement
    int sum = 1, odd = 0;
    int temp;
    int x = 0;
    while (n > 9){
        temp = n % 10;
        (temp % 2 == 0)? odd++ : sum *=temp ;
        x++;
        n = n / 10;
    }
    (n % 2 == 0)? odd++ : sum *=n ;
    if (x + 1 == odd) sum = 0;
    return sum;
}