/**
 * Stellar Navigator, let's see if you can get our theme park queue rolling! It's your turn to control the ebb and flow. Write the code that adds a new visitor to the back of the queue and then allows the first visitor to take the ride.
 */
class Solution {
  static class Queue {
      int front, rear, capacity;
      int[] elements;
      
      public Queue(int capacity) {
          this.capacity = capacity;
          elements = new int[this.capacity];
          front = 0;
          rear = 0;
      }
      
      // Adds an element to the rear of the queue
      public void enqueue(int element) {
          // Check if queue is not full
          if((rear + 1) % capacity == front) return;
          // TODO: If not full, add element to the queue and adjust the rear
          elements[rear] = element;
          rear = (rear+1) % capacity;
          
      }
      
      // Removes and returns an element from the front of the queue
      public int dequeue() {
          // Check if queue is not empty
          if(this.front == this.rear) return Integer.MIN_VALUE;
          // TODO: If not empty, return the front element and move the front forward
          int val = elements[front];
          front = (front+1) % capacity;
          return val; // Placeholder return value to indicate queue is empty (remove when implementing)
      }
  }
  
  public static void main(String[] args) {
      Queue queue = new Queue(5);
      queue.enqueue(1);
      queue.enqueue(2);
      // TODO: Use dequeue method to remove and display the visitor taking the ride
      System.out.println(queue.dequeue() + " riding");
  }
}