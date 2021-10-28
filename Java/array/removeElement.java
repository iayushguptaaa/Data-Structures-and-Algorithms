import java.io.*;
import java.util.*;

public class removeElement {

    public static void removeElement(int[] nums, int elem) {
      int length = nums.length;

      int pointerAddOne = 0;

      int pointerNum = 0; 
      
      for(int j=0; j<length; j++, pointerNum++)
      {
        if(nums[j] == elem)
        {
   
           while(pointerNum  > pointerAddOne){
               nums[pointerNum] = nums[pointerNum - 1];
               pointerNum--;
           }

           nums[pointerNum] = 1;

           pointerNum = j;             
           pointerAddOne++;
           
        }
        
      }
    
    for(int i = 0; i < nums.length;i++)
      System.out.println(nums[i]);
    }
    
    public static void main(String args[]) {

        int x = 2;
		int [] nums = {1,2,6,4,7,8,9,6,4,6,2,6,96,66,3,2,4,6,5,2,5,2,2,2};
		System.out.println("Original array: "+ Arrays.toString(nums));

        removeElement(nums, x);
    }
}
