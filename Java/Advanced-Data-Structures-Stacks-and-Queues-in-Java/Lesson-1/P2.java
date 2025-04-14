/**
 * Well done, Space Voyager! Now, let's see if you can implement one of the key methods of a Stack from scratch. It's time to push ahead and add some elements to your dish stack!
 */

 class Stack {
  private int maxSize;
  private int[] dishStack;
  private int top;

  public Stack(int s) {
     maxSize = s;
     dishStack = new int[maxSize];
     top = -1;
  }

  // TODO: Add the method to push a new dish onto the stack
  // If the stack is full, let the chef know they can't add more dishes!
  public void push(int val){
      if(top < dishStack.length - 1){
          dishStack[++top] = val;
      }else System.out.println("Stack overflow");
  }
}

class Solution {

  public static void main(String[] args) {
     Stack plateStack = new Stack(3); // A stack to hold 3 plates
     plateStack.push(1); // Add a plate with ID 1
     plateStack.push(2); // Add a plate with ID 2
     plateStack.push(3); // Add a plate with ID 3
     plateStack.push(4); // Fail to add a plate with ID 4 as stack is full
  }
}