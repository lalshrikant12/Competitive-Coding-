import java.util.ArrayList;
import java.util.*;
public class Ice
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		int cost;
		int arr[]=new int[1000];
		int n;
		ArrayList<Integer> list=new ArrayList<Integer>(); 
        HashMap<Integer, int[]> map 
            = new HashMap<>(); 
		for(int i=1;i<=t;i++)
		{	String label="list1" + Integer.toString(t);
			ArrayList<Integer> list1=new ArrayList<Integer>(); 
			
			cost=sc.nextInt();
			n=sc.nextInt();
			for(int j=0;j<n;j++)
			{
				arr[j]=sc.nextInt();
			}
			for(int j=0;j<n;j++)
			{
				for(int k=j+1;k<n;k++)
				{
					if(arr[j]+arr[k]== cost)
					{	
						list.add(j+1);
						list.add(k+1);
						
					//	System.out.print(j+1);
						//System.out.print(" ");
						//System.out.print(k+1);
						
						
					}
					
				}
				break;
			}
			
			
		}
		
	try {
		for(int i=0;i<t;i++)
		{
		
				
		 for (int j=i*2; j<i+2; j++) 
		 {
	            System.out.print(list.get(j)+" "); 
	            
	           // System.out.println(); 
	            
		 }
		 System.out.println(); 
		 }
		}catch(Exception e)
	{System.out.println();}
}}
