/* *Excellent progress! Now, for a slight twist: adjust the binarySearchBook method so that it returns the index where the book should be inserted if it's not found. This will require a subtle change to the return value when the book ID is not present in the array. Don't forget to modify the print statement to reflect new logic. */
class Solution {
  static int binarySearchForBook(int[] bookIDs, int start, int end, int searchID) {
      if (start > end) return start; // Return the insertion point if not found
      int mid = start + (end - start) / 2; // Find the midpoint
      if (bookIDs[mid] == searchID) return mid; // Target found
      if (bookIDs[mid] > searchID) // If the target is less than the midpoint
          return binarySearchForBook(bookIDs, start, mid - 1, searchID); // Search the left half
      return binarySearchForBook(bookIDs, mid + 1, end, searchID); // Search the right half
  }

  public static void main(String[] args) {
      int[] bookIDs = {101, 203, 307, 404, 513, 628, 734, 850, 961};
      int searchID = 367;
      int bookIndex = binarySearchForBook(bookIDs, 0, bookIDs.length - 1, searchID);
      if (bookIDs[bookIndex] == searchID)
          System.out.println("Book with ID " + searchID + " is at index: " + bookIndex);
      else
          System.out.println("Book with ID " + searchID + " must be inserted at index: " + bookIndex);
  }
}
