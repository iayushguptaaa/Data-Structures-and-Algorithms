
class Parent
 {
  }
class Child extends Parent
 { 

  }

class Inst

{
    public static void main(String[] args)
    {
        Child cobj = new Child();

       
        if (cobj instanceof Child)
           System.out.println("cobj is instance of Child");
        else
           System.out.println("cobj is NOT instance of Child");

   
        if (cobj instanceof Parent)
           System.out.println("cobj is instance of Parent");
        else
           System.out.println("cobj is NOT instance of Parent");

      
        if (cobj instanceof Object)
           System.out.println("cobj is instance of Object");
        else
           System.out.println("cobj is NOT instance of Object");           
    }
}
