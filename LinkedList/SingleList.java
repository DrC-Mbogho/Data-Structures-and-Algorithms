//A class for linkedlist operations
public class SingleList
{
   //defining the head and tail of a singly linked list using the Node class
   public Node head = null;
   public Node tail = null; 
   
   //Add a node to the list
   public void insert(String data)
   {
      //Create a new node
      Node newNode = new Node(data);
      
      //check if the list is empty
      if (head == null)
      {
        head = newNode;
        tail = newNode; 
      }
      else //there is already an existing node, so we add new node to the tail
      {
        tail.next = newNode;
        tail = newNode;
      }
   } 
   
   //Remove a node from the list
   public void remove()
   {   
      //check if the list is empty
      if (head == null)
      {
        System.out.println("This list is empty"); 
      }
      else 
      {
        if(head==tail)//if there is only one node
          head = tail = null; //become null since there was only one node left
        else
        {
          Node current = head;
          
          while (current.next !=tail) //loop until second last item
          {
            current = current.next; 
          }
          
          tail = current;
          tail.next = null; 
        }
          
      }
   } 

   
   //Display data that the list contains
   public void displaylist()
   {
     Node current = head;
     
     if (head==null)
       System.out.println("The list is empty");
     else
     {
        while(current!=null)
        {
          System.out.println(current.getData());
          current = current.next;
        }
     }
   
   } 
    

}