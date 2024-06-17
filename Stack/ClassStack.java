//An implementation of Stack in Java

public class ClassStack
{
   //Instance variables
   private int maxSize; //Stack maximum size
   private String stackArray[]; //Stack declared as an String array to store names
   private int top; //integer value for the index of the top item in the 
  
   //constructor to initialize variables
   ClassStack(int size)
   {
     maxSize = size; //size of the array
     stackArray = new String[size]; //create array
     top = -1; //initialise to -1 since the first item in an array is 0 
   }
   
   //Check if stack is empty
   public boolean isEmpty()
   {
     if(top==-1)
      return true;
     else
        return false; 
   }
   
    //Check if stack is full
   public boolean isFull()
   {
     if(top==maxSize-1)
      return true;
     else
        return false; 
   }
   
   //method to add name to the class register
   public void push(String name) //adding a String name to the class list 
   {
     if(isFull()) //if the stack is full
     {
       System.out.println("Stack is full. Cannot add " + name);
     }
     else
     {
       top++; //increment the index by 1 to add the new name
       stackArray[top] = name; //add the name to the Stack
     }
   }
   
    
   //method to remove names from the class register
   public void pop()
   {
     if(isEmpty()) //check if the top most item's index is less than 0
       System.out.println("Stack is empty.");
     else
     {       
        System.out.println("\nRemoved " + stackArray[top]); 
        top--; //decrement the index to remove the name
     } 
   } 
   
   //peek top most item
   public void peek()
   {
     if(isEmpty())
       System.out.println("Stack is empty");
     else
       System.out.println("Peeked: " + stackArray[top]);
   }
   
   //check size
    public void stacksize()
   {
     if(isEmpty())
       System.out.println("Stack is empty");
     else
     {
       int s = top+1;
       System.out.println("Size: " + s);
     }
   }
   
   //method to print items from the class register
   public void print()
   {
     if(isEmpty()) //if stack is empty
       System.out.println("There is no item to print");
     else
     {
        System.out.println("\nClass Register"); 
        //for-loop iterates through the array 
        for(int i=0; i<=top; i++)
        {
          System.out.println(stackArray[i]); 
        }
     }
   }
  
}