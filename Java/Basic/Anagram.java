

import java.util.Scanner;

public class Solution {
 
    static boolean isAnagram(String a, String b) {
        // Complete the function
        if(a.length()!=b.length())
        {
            return false;
        }
        else
        {
            char[] s1 = a.toLowerCase().toCharArray();
            char[] s2 = b.toLowerCase().toCharArray();
            boolean anagram=true;
            java.util.Arrays.sort(s1);
            java.util.Arrays.sort(s2);

            for(int i=0; i<a.length(); i++)
            {
                if(s1[i]!=s2[i])
                {
                    return anagram=false;
                }
            }
            return true;
        }
        
    }

  public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}
