/**
 * Imagine you've stumbled upon an ancient book during our space journey and want to count the number of digits in the mysterious numbers marked on its spine. The provided code calculates exactly that. Click Run to see the magic happen!
 */
class Solution {
  static int countDigits(int number) {
      // Base case: if number is less than 10, it's a single-digit number
      if (number < 10) {
          return 1;
      } else {
          // Recursive case: chop off one digit and count the rest
          return 1 + countDigits(number / 10);
      }
  }

  public static void main(String[] args) {
      System.out.println("Number of digits in 1234: " + countDigits(1234)); // Should print 4
  }
}