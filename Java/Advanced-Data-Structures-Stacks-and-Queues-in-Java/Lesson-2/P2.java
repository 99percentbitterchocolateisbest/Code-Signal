/**
 * Attention, Space Voyager! You know those alien messages we receive? Let's play with them! Picture every letter's case is reversed, then the whole message is flipped like in a cosmic stack! Your mission is to code this stack.

Once finished, we'll respond with the reversed, case-flipped string! Now, unleash your linguistic skills and establish this interstellar communication!
 */

 import java.util.*;

class Solution {
    public static void main(String[] args) {
        System.out.println(reverseAndFlipCase("Hello, World!")); // Expected Output: "!DLROw ,OLLEh"
        System.out.println(reverseAndFlipCase("hello")); // Expected Output: "OLLEH"
        System.out.println(reverseAndFlipCase("HELLO")); // Expected Output: "olleh"
    }

    public static String reverseAndFlipCase(String str) {
        Stack<Character> stack = new Stack<>();

        char[] charArray = str.toCharArray();
        for (char ch : charArray) {
            // fill the stack
            stack.push(ch);
        }

        StringBuilder reversed = new StringBuilder();
        // implement this
        while (!stack.isEmpty()) {
            reversed.append(stack.pop());
            
        }
        String str_ = reversed.toString(); // cheesey solution
        StringBuilder reversed_ = new StringBuilder();
        for(char ch : str_.toCharArray() ){
            reversed_.append((Character.isLowerCase(ch))? Character.toLowerCase(ch) : Character.toUpperCase(ch));
        }
        

        return reversed_.toString();
    }
}