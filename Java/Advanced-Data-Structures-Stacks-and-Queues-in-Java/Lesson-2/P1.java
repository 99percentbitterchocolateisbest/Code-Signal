/**
 * Hey there, Galactic Pioneer! Let's embark on a new mission - a string of parentheses ( and ), needs your decoding skills. Your job will be to create a function areParenthesesBalanced that takes a string as an input and returns a boolean value where True represents that each parenthesis appropriately finds its pair and they are perfectly nested, whereas False implies a glitch in this alignment. Take for instance, (()) is balanced, but ())( is not. Recollect the teleportation rules of the universe and watch out for edge cases like an empty string or a string with just one parenthesis. Stay sharp, Pioneer!
 */

import java.util.HashMap;
import java.util.HashSet;
import java.util.Stack;

class Solution {
    public static void main(String[] args) {
        System.out.println(areParenthesesBalanced("(())()"));  // prints: true
        System.out.println(areParenthesesBalanced("())("));  // prints: false
        System.out.println(areParenthesesBalanced("("));  // prints: false
    }

    public static boolean areParenthesesBalanced(String inputStr) {
        // implement the solution
        HashMap <Character,Character> M = new HashMap<>();
        M.put('(', ')');
        
        HashSet<Character> OP = new HashSet<>();
        
        OP.add('(');
        Stack<Character> y = new Stack<>();
        for(int i = 0; i < inputStr.length(); i++){
            char x = inputStr.charAt(i);
            if(OP.contains(x)){
                y.push(x);
            }else if(!y.isEmpty() && x == M.get(y.peek())){
                y.pop();
            }else return false;
        }
        return y.isEmpty();
        
        
         
    }
}