import java.util.Scanner;

public class Clouds {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int arr[]=new int[n];
		int k=sc.nextInt();
		for(int i=0;i<n;i++)
		{
			arr[i]=sc.nextInt();
		}
		int i=0;
		int energy=100;
		do
		{
			energy--;
			i=(i+k)%n;
			if(arr[i]==1)
			{
				energy=energy-2;
			}
			
		}while(i!=0);
		System.out.println(energy);

	}

}
