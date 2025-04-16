/**
 * Hello there, Stellar Navigator! Ready for another space adventure? This time, we're navigating through an array of intergalactic integers. Your mission, should you choose to accept it, is to locate the next smallest number for each number in this array. If no smaller number exists in the subsequent elements, flag that number with -1.

Remember, you're only going to be looking at the numbers that FOLLOW the current number in the array. We're not looking back; we're Space Explorers, we only move forward!

Remember to stay curious, bold, and respectful as you journey through the stars ...or in this case, arrays!
 */

import java.util.Stack;

class Solution {
    public static int[] findFollowingSmallerElements(int[] arr) {
        int[] result = new int[arr.length];
        Stack<Integer> stack = new Stack<>();
        
        // implement this
        for(int i = arr.length-1; i >= 0;i--){
            while (!stack.isEmpty() && stack.peek() >= arr[i]) {
                stack.pop();
            }
            result[i] = stack.isEmpty()? -1 : stack.peek();
            stack.push(arr[i]);
        }

        return result;
    }

    public static void main(String[] args) {
        int[] arr = {3, 7, 1, 7, 4, 3};
        int[] result = findFollowingSmallerElements(arr);
        for (int n : result) {
            System.out.print(n + " ");
        }
        // Expected Output: 1 1 -1 4 3 -1 

        // Additional tests
        int[] arr2 = {4, 6, 2, 8, 1, 7};
        int[] result2 = findFollowingSmallerElements(arr2);
        for (int n : result2) {
            System.out.print(n + " ");
        }
        // Expected Output: 2 2 1 1 -1 -1 

        int[] arr3 = {1, 1, 1, 1, 1};
        int[] result3 = findFollowingSmallerElements(arr3);
        for (int n : result3) {
            System.out.print(n + " ");
        }
        // Expected Output: -1 -1 -1 -1 -1 
    }
}