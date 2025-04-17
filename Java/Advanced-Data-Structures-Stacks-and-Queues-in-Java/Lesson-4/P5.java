/**
 * Take control of the Theme Park Queue Management system! You'll need to recreate the queue handling by adding visitors to the queue, allowing the first in line to go on the ride, and then showing who's next. Fill in the code to bring the theme park queue to life!
 */

import java.util.LinkedList;
import java.util.Queue;


class Solution {
    public static void main(String[] args) {
        // TODO: Initialize a new Queue of type String using LinkedList
        Queue<String> x = new LinkedList<>();
        // Add three visitors to the queue
        x.add("101");
        x.add("102");
        x.add("103");

        // TODO: Remove the visitor at the front of the queue and print who is on the ride
        System.out.println("Visitor " + x.poll() + " on ride.");
        
        // TODO: Peek at the next visitor in the queue and print who is next in line
        System.out.println("Visitor " + x.peek() + " next in line.");
        
    }
}