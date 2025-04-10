/**
 * Great work, Space Voyager! Now, let's test your knowledge of recursion with a cosmic challenge. You will need to help calculate the sum of all digits in a star code number. Replace the TODO with the recursive magic that will do the trick.
 */
class Solution {
  // Recursive method to calculate the sum of digits of a number
  static int countStars(int number) {
      if(number == 0) return 0; // Base case: if number is 0, stop recursion
      // TODO: Add the recursive logic to sum up the digits of 'number'
      return number % 10 + countStars(number/10);

  }

  public static void main(String[] args) {
      System.out.println(countStars(4042)); // Will print the sum of digits of the star code 4042
  }
}