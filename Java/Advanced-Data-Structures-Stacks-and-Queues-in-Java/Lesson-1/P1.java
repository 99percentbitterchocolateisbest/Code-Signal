/**
 * In the context of managing a restaurant kitchen, you have code that simulates the operations of a stack handling dishes. The chef uses the stack to keep track of the dishes that need to be prepared. Click Run to see how the Stack class manages the addition and removal of dishes.
 */

 
class Stack {
  private int top = -1;
  private int[] dishesStack;

  public Stack(int capacity) {
      dishesStack = new int[capacity];
  }

  public void push(int dish) {
      if (top < dishesStack.length - 1) {
          dishesStack[++top] = dish;
      } else {
          System.out.println("Kitchen shelf is full!");
      }
  }

  public int pop() {
      if (top > -1) {
          return dishesStack[top--];
      } else {
          System.out.println("No dishes to process!");
          return -1;
      }
  }

  public int peek() {
      if (top > -1) {
          return dishesStack[top];
      } else {
          System.out.println("Kitchen shelf is empty!");
          return -1;
      }
  }
}

class Solution {
  public static void main(String[] args) {
      Stack kitchenStack = new Stack(3); // A stack for holding dishes
      kitchenStack.push(1); // Plate 1 arrives
      kitchenStack.push(2); // Plate 2 arrives
      
      System.out.println(kitchenStack.peek()); // Check the top plate (should be 2)

      kitchenStack.pop(); // Process Plate 2
      kitchenStack.pop(); // Process Plate 1
      kitchenStack.pop(); // Try to process a non-existent plate
  }
}
