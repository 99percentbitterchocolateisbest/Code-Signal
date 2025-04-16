
class Queue {
  int front, rear, size, capacity;
  int array[];
  
  public Queue(int capacity) {
      this.capacity = capacity;  // Set max size
      front = size = 0;  // Initialize front and size
      rear = capacity - 1;  // Initialize rear
      array = new int[this.capacity]; 
  }
  
  boolean isFull(Queue queue) {
      return (queue.size == queue.capacity);
  }
  
  boolean isEmpty(Queue queue) {
      return (queue.size == 0);
  }
  
  void enqueue(int item) {
      if (isFull(this)) return;  // Check if full
      rear = (rear + 1) % capacity;
      array[rear] = item;
      size++;
  }
  
  int dequeue() {
      if (isEmpty(this)) return Integer.MIN_VALUE;  // Check if empty
      int item = array[front];
      front = (front + 1) % capacity;
      size--;
      return item;
  }
}


class Solution {
  public static void main(String[] args) {
      Queue queue = new Queue(3);  // Theme park queue for 3 rides
      queue.enqueue(1);  // First person joins the queue
      queue.enqueue(2);  // Second person joins the queue
      System.out.println(queue.dequeue() + " goes for the ride!");  // First person goes for the ride
  }
}