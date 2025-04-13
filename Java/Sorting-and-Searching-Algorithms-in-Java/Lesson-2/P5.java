/**Stellar Navigator, your journey through the cosmos of code continues! Now, let’s see if you can find our missing book in the library by implementing Binary Search. Fill in the blanks, and may your logic be ever clear! */

class Solution {
  static int findBook(String[] books, int start, int end, String target) {
      // TODO: Add base case condition to stop recursion
      if(start > end) return -1;
      int mid = start + (end - start) / 2;
      if (books[mid].equals(target)) return mid; // Book found
      int re =books[mid].compareTo(target);
      // TODO: Compare mid book to target book using String.compareTo() method
      if ( re > 0 ) {
         return findBook(books, start, mid-1, target);
      }else if(re < 0){
          return findBook(books, mid + 1, end, target);
      }
      return -1;
      
      // TODO: Finish the recursive call for searching halves of the array
  }
  
  public static void main(String[] args) {
      String[] library = {"Alice in Wonderland", "Moby Dick", "The Great Gatsby", "War and Peace"};
      String bookToFind = "The Great Gatsby"; // Book we want to find
      int result = findBook(library, 0, library.length - 1, bookToFind);
      System.out.println("The book '" + bookToFind + "' is at index: " + result);
  }
}