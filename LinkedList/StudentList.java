public class StudentList
{
 public static void main(String arg[])
 {
   SingleList s = new SingleList(); 
  
   s.insert("Jane Mary");
   s.insert("Allan Poe");
   s.insert("Mary Paul");
   s.insert("Sister");
   
   System.out.println("Full list");
   s.displaylist();
   
   //remove node
   s.remove();
   
   System.out.println("\nNew list");
   s.displaylist();
   
  }

}