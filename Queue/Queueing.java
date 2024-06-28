//Will need MainQueue.java

public class Queueing
{
    public static void main (String arg[])
  {
     MainQueue q = new MainQueue(5);
     
     //add items to the queue
     q.add("001");
     q.add("002");
     q.add("003");
     q.add("004");
     q.add("005");
     
     //Display items in queue
     q.print();
     
     //remove two items from queue
     q.remove();
     q.remove();
     
     //Display remaining items in queue
     System.out.println("\n Remaining items");
     q.print();
     
     //See front item
     q.peek();
  
  }

}
