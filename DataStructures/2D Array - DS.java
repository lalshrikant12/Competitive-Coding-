import java.util.Scanner;

public class TwoD {
    
    
    public static int findsum(int arr[][],int r,int c)
    {
        int sum=arr[r+0][c+0]+arr[r+0][c+1]+arr[r+0][c+2]
                            +arr[r+1][c+1]
                +arr[r+2][c+0]+arr[r+2][c+1]+arr[r+2][c+2];
        return sum;
    }
    public static int maxHourglass(int [][] arr) {
        int max = Integer.MIN_VALUE;
        for (int row = 0; row < 4; row++) {
            for (int col = 0; col < 4; col++) {
                int sum = findsum(arr, row, col);
                max = Math.max(max, sum);
            }
        }
        return max;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int b[]=new int[9];
        
        int arr[][]=new int[6][6];
        int m=0;
        int sum=0;
        for(int i=0;i<6;i++)
        {
            for(int j=0;j<6;j++)
            {
                arr[i][j]=sc.nextInt();
            }
        }
        
        System.out.println(maxHourglass(arr));

}
}
