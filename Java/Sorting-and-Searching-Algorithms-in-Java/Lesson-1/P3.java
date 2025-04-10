/**
 * Review this code carefully. There's a subtle space anomaly causing an incorrect number of digits to be counted in our cosmic integer. Find and fix the glitch so we can accurately track the stars again!
 */
class Solution {
  static int countDigits(int num) {
    if(num < 10) {
      return 1;
    } else {
      return 1 + countDigits(num / 10); // Recursive execution to count remaining digits
    }
  }

  public static void main(String args[]) {
    System.out.println(countDigits(9876)); 
  }
}