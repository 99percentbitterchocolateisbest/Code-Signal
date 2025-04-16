/**
 * Alright, Space Voyager, let's work on this fascinating puzzle. Have you ever wondered how to find the maximum value in a stack so far, without removing it, and without taking ages to do it? Well, here’s your chance!

Your task is to design a new stack operation called "getMax", which swiftly returns the maximum element in the stack in constant time. Input will be the set of stack operations including "push", "pop", "top", and your new operation "getMax".

Remember the edge case when the stack is empty. Output will be the maximum value that has ever been pushed into the stack. No pressure, if you get stuck, remember to revisit the lesson! Let’s dive in!
 */

import java.util.Stack;

class MaxStack {
    private Stack<Integer> stack = new Stack<>();
    private Stack<Integer> maxValues = new Stack<>();

    public void push(int x) {
        // implement this
        if(maxValues.empty() || x >= maxValues.peek() ) maxValues.push(x);
        stack.push(x);  
    }
    
    public void pop() {
        // implement this
        if(!stack.empty() && stack.peek().equals(maxValues.peek())){
          maxValues.pop();  
        }
        if(!stack.empty()) stack.pop();
        
    }
    
    public int top() {
        return stack.isEmpty() ? -1 : stack.peek();
    }
    
    public int getMax() {
        // implement this
        return maxValues.isEmpty() ? -1 : maxValues.peek();
    }
}

class Solution {
    public static void main(String[] args) {
        MaxStack maxStack = new MaxStack();
        maxStack.push(-2);
        maxStack.push(0);
        maxStack.push(-3);
        System.out.println(maxStack.getMax());  // Expected Output: 0
        maxStack.pop();
        System.out.println(maxStack.top());    // Expected Output: 0
        System.out.println(maxStack.getMax());  // Expected Output: 0

        maxStack.push(10);
        System.out.println(maxStack.getMax());  // Expected Output: 10
        maxStack.push(-1);
        System.out.println(maxStack.getMax());  // Expected Output: 10
    }
}