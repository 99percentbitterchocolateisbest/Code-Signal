/**
 * Hey there, Space Voyager! Time for another adventure! Let's expand your skill set with the MovingAverage class. Stellar idea, isn't it? Here's your challenge: fill in the missing code parts to correctly update the sum whenever a new element enters or leaves the sliding window.

Initiate launch sequence and go for it!
 */


 import java.util.LinkedList;
 import java.util.Queue;
 
 class MovingAverage {
     private int size;
     private Queue<Integer> window;
     private double sum;
 
     public MovingAverage(int size) {
         this.size = size;
         this.window = new LinkedList<>();
         sum = 0.0;
     }
 
     public double next(int val) {
         // implement this
         if(window.size() == size) sum -= window.poll();
         
         window.add(val);
         sum += val;
         return sum/window.size();
     }
 }
 
 class Solution {
     public static void main(String[] args) {
         MovingAverage m = new MovingAverage(3);
         System.out.println(m.next(1)); // returns 1.0 (like a single heart rate reading)
         System.out.println(m.next(10)); // returns 5.5 (the average after a short burst of activity)
         System.out.println(m.next(3)); // returns 4.66667 (normalizing after the burst)
         System.out.println(m.next(5)); // returns 6.0 (the most recent average, taking into account the last three readings)
     }
 }