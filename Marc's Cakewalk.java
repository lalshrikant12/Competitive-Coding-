/*Marc loves cupcakes, but he also likes to stay fit. Each cupcake has a calorie count, and Marc can walk a distance to expend those calories. If Marc has eaten  cupcakes so far, after eating a cupcake with  calories he must walk at least  miles to maintain his weight.

For example, if he eats  cupcakes with calorie counts in the following order: , the miles he will need to walk are . This is not the minimum, though, so we need to test other orders of consumption. In this case, our minimum miles is calculated as .

Given the individual calorie counts for each of the cupcakes, determine the minimum number of miles Marc must walk to maintain his weight. Note that he can eat the cupcakes in any order.

Function Description

Complete the marcsCakewalk function in the editor below. It should return a long integer that represents the minimum miles necessary.

marcsCakewalk has the following parameter(s):

calorie: an integer array that represents calorie count for each cupcake
Input Format

The first line contains an integer , the number of cupcakes in .
The second line contains  space-separated integers .

Constraints

Output Format

Print a long integer denoting the minimum number of miles Marc must walk to maintain his weight.

Sample Input 0

3
1 3 2
Sample Output 0

11
Explanation 0

Let's say the number of miles Marc must walk to maintain his weight is . He can minimize  by eating the  cupcakes in the following order:

Eat the cupcake with  calories, so .
Eat the cupcake with  calories, so .
Eat the cupcake with  calories, so .
We then print the final value of , which is , as our answer.

Sample Input 1

4
7 4 9 6
Sample Output 1

79
Explanation 1*/
import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

public class  Solution{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n;
        n=sc.nextInt();
    long sum=0;
    long temp;
    long[] ar=new long[n];
    for(int i=0;i<ar.length;i++)
    {
        ar[i]=sc.nextInt();
    }
    for(int i=0;i<ar.length;i++)
    {
        for(int j=i+1;j<ar.length;j++)
    {
        if(ar[i]<ar[j])
        {
            temp=ar[i];
            ar[i]=ar[j];
            ar[j]=temp;
         }
    }
    }
     long c=0;
    for(int i=0;i<n;i++)
    {    
        c=ar[i];
        sum+=Math.pow(2,i)*c;
     }
     System.out.println(sum);
    }
}

