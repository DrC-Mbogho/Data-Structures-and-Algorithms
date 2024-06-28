//Implementation of a queue in Java

public class MainQueue
{
  private String[] names; //array to store a queue of names
  private int front; //front element of the queue
  private int back; //back element of the queue
  private int size; //max size of the queue
  private int count; //number of names in queue
    
  //constructor to initialize variables
  MainQueue(int arrsize)
  {
    size = arrsize; 
    names = new String[size]; 
    front = 0; //starting index for front, so that the first item will be at index 0
    back = -1; //starting index for back
    count = 0;  //start with no items in the queue 
  }
  
  //Check if queue is empty
  public boolean isEmpty()
  {
    return (count==0); 
  }
  
  //Check if queue is full
  public boolean isFull()
  { 
    //if(count==size)//if number of items is equal to max size
    return (count==size);
  }
  
  //Add names to queue
  public void add(String item)
  {
    if(isFull())
    {
       System.out.println("Queue is full");
    }
    else
    { 
       back++; //increment the reference to the item at the back to show that a new element has joined the array
       names[back] = item; //add the new item to the back position
       System.out.println("Added to queue -" + item); //output the new element
       count++; //increase the queue size
    }         
  }
  
  //Remove names from queue first in first out
  public void remove()
  {
    if(isEmpty())
      System.out.println("Queue is empty - nothing to remove");
    else
    {
      String remove = names[front]; //access the data where the front index is pointing 
      System.out.println("\nRemoving " + remove); 
      
      if(count==1) //if this is the last element being removed, reset front and back
      {
        front = 0;
        back = -1; 
      }
      else
        front++; //move the front index up, to show that the next element in the queue is now at the front
        count --; 
    }
  }
  
  public void sizecount()
  {
    System.out.println("Number of items:" +count); 
    System.out.println("Maz size:" +size); 
  }
  
  public void peek()
  {
     if(isEmpty())
       System.out.println("Queue is empty");
     else
       System.out.println("\nFront item : " + names[front]); 
  }
  
  public void lastitem()
  {
      if(isEmpty())
       System.out.println("Queue is empty");
     else
       System.out.println("Last item in queue " + names[back]); 
  }
  
  //Display names in queue
  public void print()
  {
   if(isEmpty())
    System.out.println("Queue is empty");
  else
  {
       for(int i=front; i<=back; i++)
       {
         System.out.print(names[i] + " ");
       }
         System.out.println(); 
   }
  }
}