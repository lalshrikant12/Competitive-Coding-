import java.util.Scanner;

public class AngryProfessor
{
    static String fun(int arr[],int k)
    {
        int count=0;
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]<=1)
            {
                count++;
            }
        }
        if(count<k)
        {
            return ("YES");
        }
        else
        {
            return("NO");
        }
    }
public static void main(String args[])
{
    
Scanner sc=new Scanner(System.in);
int t=sc.nextInt();
int n,k;
String brr[]=new String[t]; 

for(int i=1;i<=t;i++)
{
    n=sc.nextInt();
    k=sc.nextInt();
    int arr[]=new int[n];
    for(int j=0;j<n;j++)
    {
        arr[j]=sc.nextInt();
    }
    
        System.out.println(fun(arr,k));
}
}
}
