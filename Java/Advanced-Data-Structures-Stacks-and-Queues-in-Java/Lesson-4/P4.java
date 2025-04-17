/**
 * Imagine we're managing a theme park queue, and your task is to get the queue ready for the first eager visitor. The provided code checks who is first in line without removing them from the queue. Click Run to see who's excited for a thrilling ride!
 */


 class Solution {
  public static void main(String[] args) {
      java.util.Queue<String> themeParkQueue = new java.util.LinkedList<>();
      themeParkQueue.add("Alice");
      themeParkQueue.add("Bob");
      themeParkQueue.add("Charlie");

      // Peeking the first person in the queue without removing
      String name = themeParkQueue.peek();
      System.out.println(name + " is ready for the roller coaster!");

      // Now let's remove the first person from the queue
      themeParkQueue.remove();
  }
}