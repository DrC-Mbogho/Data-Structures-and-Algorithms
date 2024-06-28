import java.util.*;
public class LinkedListExample
{
  public static void main(String arg[])
  {
     Scanner sc = new Scanner(System.in);
     
     LinkedList <String> names = new LinkedList<String>(); //create 
     System.out.println("How many names do you want to record?"); 
     int number = sc.nextInt(); 
     
     for(int i=1; i<=number; i++)
     {
        System.out.println("Enter name " + i);
        String n = sc.next();
        names.add(n);   //adds the element to the end of th elist  
     }
     
     System.out.println("Original names:" + names);
     
     names.add(2, "Magdalene"); //add a name at a specified index
     
     LinkedList<String> newnames = new LinkedList<String>();
     newnames.add("Peter");
     newnames.add("John"); 
     
     names.addAll(0,newnames); //adds all specificed elements in the collection at the specified index
     names.addFirst("Anne"); //adds to the start of the list
     names.addLast("Zachary");  //adds to the end of the list 
     
     System.out.println("Updated names:" + names);
     
     
     //Get, retrieve head (peek/element), getLast, poll (remove head), remove (head and index), set, sort. 
     System.out.println("\n Additional Operations "); 
     
     System.out.println("3rd Name: " + names.get(2));
     System.out.println("First Name: " + names.peek()); 
     System.out.println("Last Name: " + names.getLast());
     System.out.println("Polling : " + names.poll()); //remove head name
     names.remove(1); //remove with index
     names.set(0,"Joe"); //setting first name to Joe
     Collections.sort(names); //sort in ascending order. 
     
     System.out.println ("\n Final List");
     System.out.println(names); 
    } 
       
  }