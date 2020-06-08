import java.util.Scanner;

public class Hurdle {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int k=sc.nextInt();
		int big=0;
		int height[]=new int[n];
		for(int i=0;i<n;i++)
		{
			height[i]=sc.nextInt();
		}
		for(int i=0;i<n;i++)
		{
			if(big<height[i])
			{
				big=height[i];
			}
		}
		if(k<big)
		{
			k=big-k;
		}
		else
		{
			k=0;
		}
		System.out.println(k);
	}

}
