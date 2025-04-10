/**
 * Galactic Pioneer, let's refine our digit counter to be more selective. Modify the existing countDigits function so that it tallies up only the even digits of a number. Use what you've learned about conditional checks and recursion to accomplish this stellar task.
 */
class Solution {
  // Function to count the number of digits in a number using recursion
  static int countDigits(int num) {
    if(num <10) {
      return (num % 2 == 0)? 1 : 0 ;
    } else {
      // Recursive case: reduce the number by dividing by 10 and count the rest
      return (num%2==0)?  1 + countDigits(num / 10) : countDigits(num/10);
    }
  }

  public static void main(String args[]) {
    System.out.println("The number of digits in the 'diameter of Mars': " + countDigits(7623));
  }
}