/**
 * Galactic Pioneer, it's time to sharpen your debugging skills! Your theme park queue is malfunctioning. It's supposed to allow a person to enter the ride when their ticket number is called, but something is amiss. Analyze and amend the code to ensure that the first person in line gets their turn. Happy bug hunting!
 */

class Queue {
    int front, rear, size;
    int capacity;
    int[] elements;

    public Queue(int capacity) {
        this.capacity = capacity;
        elements = new int[capacity];
        front = size = 0; 
        rear = capacity-1;
    }

    public void enqueue(int item) {
        if (size == capacity) return;
        rear = (rear + 1) % capacity;
        elements[rear] = item;
        size++;
    }

    public int dequeue() {
        if (size == 0) return Integer.MIN_VALUE;
        int item = elements[front];
        front = (front + 1) % capacity;
        size--;
        return item;
    }
}

class Solution {
    public static void main(String[] args) {
        Queue queue = new Queue(3); // Initialize theme park queue
        queue.enqueue(101); // Person 101 enters the queue
        queue.enqueue(102); // Person 102 enters the queue
        System.out.println("Ticket number " + queue.dequeue() + " can enter the ride."); // Should let person 101 enter
    }
}