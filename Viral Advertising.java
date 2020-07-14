import java.util.Scanner;

public class Advertising {
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int sum=0;
        int t=5;
        for(int i=1;i<=n;i++)
        {
            int p=t/2;
            int q=p*3;
            sum=sum+p;
            t=q;
            
        }
        System.out.println(sum);
    }

}
