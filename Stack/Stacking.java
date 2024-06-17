//main class for Stack
public class Stacking
{
  public static void main (String arg[])
  {
    ClassStack cs = new ClassStack(6);
    
    cs.push("Chao");
    cs.push("Mark");
    cs.push("Mary");
    
    cs.print();
  }

}