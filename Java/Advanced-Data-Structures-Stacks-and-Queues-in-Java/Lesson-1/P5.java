/**
 * Great work so far! Now let's consolidate your knowledge by implementing from scratch a small Java program that simulates the stacking of plates in a restaurant kitchen. Your task is to create a stack, add plates to it, and then remove all the plates one by one, printing the whole stack after each removal.
 */
import java.util.Stack;

class Solution {
    public static void main(String[] args) {
        // TODO: Create a Stack object to simulate a stack of plates
        Stack<Integer> x = new Stack<>();
        
        // TODO: Add three plates to the stack (numbered 1, 2, 3)
        x.push(1);
        x.push(2);
        x.push(3);
        
        // TODO: Remove all the plates from the stack. Print initial stack state and its state after each removal
        while(x.size() != 0){
            System.out.println("Plate "+ x.peek() + " removed");
            x.pop();
        }
    }
}