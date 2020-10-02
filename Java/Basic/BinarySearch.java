import java.util.*;
class BinarySearch
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int a[];
        int i=0,n=0,s=0,e=0,mid=0,l=0;
        System.out.println("Enter number of terms to enter");
        l=sc.nextInt();
        a=new int[l];
        System.out.println("Enter "+l+" numbers in ascending order");
        for(i=0;i<l;i++)
        {
            a[i]=sc.nextInt();
        }
        System.out.println("Enter a number to search");
        n=sc.nextInt();
        s=0;
        e=l-1;
        mid=e/2;
        while(s<e)
        {
            if(a[mid]<n)
            {
                s=mid+1;
            }
            else if(a[mid]<n)
            {
                e=mid-1;
            }
            else
            {
                System.out.println("Found at position "+(mid+1));
            }
            mid=(s+e)/2;
        }
        if(s>e)
        {
            System.out.println("Not present");
        }
    }
}
        