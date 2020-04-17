import java.util.*;
public class Prey {
	public static void main(String args[])
	{
	  Scanner sc=new Scanner(System.in);
	  long n;
	  long arr[]=new long[15];
	long d;
	long m;
	long t;
	long count=0;
	m=sc.nextLong();


	for(int i=1;i<=m;i++)
	{ 
		count =0;
	n=sc.nextLong();
	
	while(n>0)
	{
		d=n/10; 
		t=n%10 ;
		if(t>0 && n%t==0)
		{
			count++;
		}
		n=d;
		
	}
	arr[i]=count;

	}
	for(int i=1;i<=m;i++)
	{
	System.out.println(arr[i]);	
	}
	}
}
