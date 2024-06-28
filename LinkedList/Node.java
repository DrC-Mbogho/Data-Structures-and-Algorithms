//Class to create a node
class Node
{
   String data;
   Node next; 
   
   Node(String d)
   {
     data = d;
     next = null;
   }
   
   //fetch data
   public String getData()
   {
     return data; 
   }

}