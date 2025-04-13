/**
 * Galactic Pioneer, we have a series of book IDs sorted in a space database, and your task is to find a specific book using Binary Search. It appears there is a warp breach in the current code; it's not locating the books correctly, falling into an infinite recursion. Can you identify and repair the malfunction? Good luck!
 */

 class Solution {
  static int findBookIndex(int[] ids, int start, int end, int bookId) {
      if (start > end) return -1; // Base case: Book not found
      int mid = start + (end - start) / 2; // Find the midpoint
      if (ids[mid] == bookId) return mid; // Book found
      if (ids[mid] > bookId)
          return findBookIndex(ids, start, mid-1, bookId); // Check the left half
      return findBookIndex(ids, mid+1, end, bookId); // Check the right half
  }

  public static void main(String[] args) {
      int[] bookIds = {2, 4, 6, 8, 10, 12}; // Sorted array of books by IDs
      int bookToFind = 2; // ID of the book to find
      System.out.println(findBookIndex(bookIds, 0, bookIds.length - 1, bookToFind)); // Outputs: 0
  }
}