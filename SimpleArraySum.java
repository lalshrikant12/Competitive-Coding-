import java.io.*;
import java.math.*;
import java.text.*;
import java.util.*;
import java.util.regex.*;

public class Solution
{
public static void main(String arg[])
{
Scanner sc= new Scanner(System.in);
int n;
int sum=0;
n=sc.nextInt();
int arr[]= new int[n];
for(int i=0;i<n;i++)
{
arr[i]=sc.nextInt();
sum=sum+arr[i];
}
System.out.println(+sum);
}
}
