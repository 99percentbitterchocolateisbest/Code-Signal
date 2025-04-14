/**
 * Observe how a stack of plates is managed in a restaurant kitchen. The given code simulates the addition of plates to the stack and the washing of the topmost plate. Click Run to observe the stack operations in action!
 */
import java.util.Stack;

class Solution {
    public static void main(String[] args) {
        // Create a stack to represent plates
        Stack<String> platesStack = new Stack<>();

        // Add three plates to the stack
        platesStack.push("Plate 1");
        platesStack.push("Plate 2");
        platesStack.push("Plate 3");

        // Wash the topmost plate
        String washedPlate = platesStack.pop();
        System.out.println("Washed: " + washedPlate);
    }
}