import java.util.Scanner;

public class Hill {
	public static void main(String args[])
	{
	
		
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		String S=sc.next();
		int count=0;
		int s=0;
		for(char c : S.toCharArray())
		{
			if(c=='U') 
			{
				s++;
			}
			else if(c=='D')
			{
				s--;
			}
			if(s==0 && c=='U')
			{
				count++;
			}
		}
		System.out.println(count);
		
		
	}
}
