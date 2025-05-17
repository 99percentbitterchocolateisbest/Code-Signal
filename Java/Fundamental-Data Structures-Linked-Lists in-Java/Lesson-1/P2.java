/**
 * The train route is expanding! Let's create a code that adds the new station to the beginning of our train route. Follow the scenario to implement the missing part.
 * 
 */

 class Node {
  int data;
  Node next;

  Node(int d) {
      data = d;
      next = null;
  }
}

class RailwayNetwork {
  Node head;

  // Method to add a new station to the network
  void addStation(int stationData) {
      // TODO: reassign head
      Node curr  = new Node(stationData);
      curr.next = head;
      head = curr;
     
  }

  void show() {
      Node current = head;
      while (current.next != null) {
          System.out.print(current.data + "-");
          current = current.next;
      }
      System.out.print(current.data);
  }

}

class Solution {
  public static void main(String[] args) {
      RailwayNetwork network = new RailwayNetwork();
      // Adding stations with their station IDs
      network.addStation(101);
      network.addStation(202);
      network.addStation(303);
      network.show();
  }
}