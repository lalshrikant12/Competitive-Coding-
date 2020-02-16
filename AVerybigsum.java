import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution
{
public static void main(String args[])
{

int n;
long sum=0;

Scanner sc=new Scanner(System.in);
n=sc.nextInt();
long arr[];
arr =new long[n];
for(int j=0;j<n;j++)
{
arr[j]=sc.nextLong();
}
for(int i=0;i<n;i++)
{
sum=sum+arr[i];

}
System.out.println(sum);
}

}
