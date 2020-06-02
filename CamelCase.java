import java.util.Scanner;

public class Camelcase {
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		String s=sc.nextLine();
		int t=1;
		for(int i=0;i<s.length();i++)
		{
			String letter=Character.toString(s.charAt(i));
			if(letter==letter.toUpperCase())
			{
				t++;
			}
		}
		System.out.println(t);
		
		
		}
	
}


