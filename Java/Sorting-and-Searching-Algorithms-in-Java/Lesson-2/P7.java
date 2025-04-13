/**
 * Stellar work on the binary search, Space Voyager! Now it's your turn to add the two key parts of the iterative binary search by yourself. Write down the code to complete the core of the our algorithm!
 */

 class Solution {
  static int findBook(int[] catalog, int bookCode) {
      int left = 0, mid = 0;
      int right = catalog.length - 1;
      
      while (left <= right) {
          // TODO: implement this
          mid = left + ( right - left ) / 2; // Avoid integer overflow issue of (right + left)/2
          if(catalog[mid] < bookCode){
              left = mid + 1;
          }else if(catalog[mid] > bookCode){
              right = mid - 1;
          } else return mid;
           
          
      }
      
      return -1; // Book not found
  }

  public static void main(String[] args) {
      int[] sortedCatalog = {101, 123, 137, 150, 165, 172, 189, 205, 220};
      int bookCode = 150;
      System.out.println("Book found at index: " + findBook(sortedCatalog, bookCode));
  }
}