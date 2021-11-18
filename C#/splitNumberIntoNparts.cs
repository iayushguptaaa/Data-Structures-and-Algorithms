using System;
using System.Collections.Generic;  

namespace HelloWorld{

 public class Hello{
   
   static List<int> split(int x, int n)
   {
       List<int> myList = new List<int>(n);

       if(x < n)
       {
           myList.Add(x);
           return myList;
       }
   
       
       else if (x % n == 0)
       {
             for(int i=0;i<n;i++)
                myList.Add(x/n);
             }
        else
       {
        int zp = n - (x % n);
        int pp = x/n;
        for(int i=0;i<n;i++)
        {
 
            if(i>= zp)
            myList.Add(pp+1);
            else
            myList.Add(pp);
        }
    }

    return myList;
}
     
// Driver code
static public void Main (){
 
int x = 19;
int n = 3;
List<int> myAns = split(x, n);

foreach (int ans in myAns)
  Console.Write(ans+" ");   

 
}
}

}


