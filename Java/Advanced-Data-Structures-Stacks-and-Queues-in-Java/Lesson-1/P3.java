/**
 * Alright, Space Voyager, I need your keen eye! The chef robot in the kitchen is designed to manage order stacks, but it's acting oddly and not accepting any new orders. Could you check the code and fix what's wrong? Good luck, and pay close attention to how stacks should properly function!
 */

 class Stack {
  private int capacity;
  private int[] kitchenOrders;
  private int topIndex = -1;

  public Stack(int capacity) {
      this.capacity = capacity;
      this.kitchenOrders = new int[capacity];
  }

  void addOrder(int order) {
      if (topIndex < capacity - 1) {
          kitchenOrders[++topIndex] = order;
      } else {
          System.out.println("Kitchen is too busy, cannot take more orders!");
      }
  }

  int nextOrder() {
      if (topIndex > -1) {
          return kitchenOrders[topIndex--];
      } else {
          System.out.println("No orders to prepare!");
          return -1;
      }
  }
}

class Solution {

  public static void main(String[] args) {
      Stack kitchenStack = new Stack(5);
      kitchenStack.addOrder(101); // Order #101 added
      kitchenStack.addOrder(102); // Order #102 added
      kitchenStack.addOrder(103); // Order #103 added
      kitchenStack.addOrder(104); // Order #104 added
      kitchenStack.addOrder(105); // Order #105 added
      System.out.println("Next order to prepare: " + kitchenStack.nextOrder()); // Should print order #105
  }
}