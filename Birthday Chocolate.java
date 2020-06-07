import java.util.Scanner;

public class Cake {

    public static void main(String[] args) {
        // TODO Auto-generated method stub
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        int d=sc.nextInt();
        int m=sc.nextInt();
        int count=0;
        int sum=0;
        if (n==1)
        {   try {
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<i+m;j++)
            {
                sum=sum+arr[j];
                if(sum==d)
                {
                    count++;
                }
            }
            sum=0;
        }
        System.out.println(count);
        }catch(Exception e)
        {
            System.out.println();
        }
    } 
        else {
             for(int i=0;i<n-m;i++)
             {
                 for(int j=i;j<i+m;j++)
                 {
                     sum=sum+arr[j];
                     if(sum==d)
                     {
                         count++;
                     }
                 }
                 sum=0;
             }
             System.out.println(count);
             }
            
        }    
    
    }


//only passes 4 testcase:(
