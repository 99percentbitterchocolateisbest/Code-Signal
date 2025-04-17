/**
 * Alright Space Voyager, let's explore a new galaxy! Say you're in command of a fleet of ships, each represented by a number in a Java Queue, aiming to travel into the unknown, in an order given. But here's an energy-saving hack - every alternate ship starting from the first one (Index 0, because a programmer's count starts from 0) hides in the hyperspace created by its preceding ship (strange, I know!). Your task? Simulate this alternate hyperspace journey!

Your input will be a Java Queue of n integers, where n can be any spread of numbers. For example, it can be [1, 2, 3, 4, 5, 6]. Your output? A new Java Queue presenting every alternate ship from the initial fleet. Meaning for the example given, your output would be [1, 3, 5].

Note that you shouldn't lost other numbers! Store them in another queue. In the example above, this other queue will contain [2, 4, 6].

Eager to see your fleet command in action, Space Voyager!
 */


 import java.util.*;

 class Solution {
     public static Queue<Integer> everyAlter(Queue<Integer> queue) {
         Queue<Integer> newQueue = new LinkedList<>();
         Queue<Integer> newQueue_ = new LinkedList<>();
         //int i = 0;
 
         // TODO: fill in new queue
         while(!queue.isEmpty()){
             newQueue.add(queue.poll());
             newQueue_.add(queue.poll());
         }
 
         return newQueue;
     }
 
     public static void main(String[] args) {
 
         // test case 1
         Queue<Integer> queue1 = new LinkedList<>();
         queue1.addAll(Arrays.asList(1, 2, 3, 4, 5, 6));
         queue1 = everyAlter(queue1);
         System.out.println(queue1); // Expected Output: [1, 3, 5]
 
         // test case 2
         Queue<Integer> queue2 = new LinkedList<>();
         queue2.addAll(Arrays.asList(1, 2));
         queue2 = everyAlter(queue2);
         System.out.println(queue2); // Expected Output: [1]
 
         // test case 3
         Queue<Integer> queue3 = new LinkedList<>();
         queue3.addAll(Arrays.asList(1, 2, 3, 4, 5, 6, 7));
         queue3 = everyAlter(queue3);
         System.out.println(queue3); // Expected Output: [1, 3, 5, 7]
     }
 }