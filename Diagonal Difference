Given a square matrix, calculate the absolute difference between the sums of its diagonals.

For example, the square matrix  is shown below:

1 2 3
4 5 6
9 8 9  
The left-to-right diagonal = . The right to left diagonal = . Their absolute difference is .

Function description

Complete the  function in the editor below. It must return an integer representing the absolute diagonal difference.

diagonalDifference takes the following parameter:

arr: an array of integers .
Input Format

The first line contains a single integer, , the number of rows and columns in the matrix .
Each of the next  lines describes a row, , and consists of  space-separated integers .

Constraints

Output Format

Print the absolute difference between the sums of the matrix's two diagonals as a single integer.

Sample Input

3
11 2 4
4 5 6
10 8 -12
Sample Output

15
Explanation

The primary diagonal is:

11
   5
     -12
Sum across the primary diagonal: 11 + 5 - 12 = 4

The secondary diagonal is:

     4
   5
10
Sum across the secondary diagonal: 4 + 5 + 10 = 19
Difference: |4 - 19| = 15

Note: |x| is the absolute value of x





#include <string.h>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int n;
    int sum=0;
    int sum1=0;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
        cin>>arr[i][j];
    }
      
    
    for(int i=0;i<n;i++)
    for(int j=i;j<i+1;j++)
    {
        sum=sum+arr[i][j];
        
    }
    

    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {if((i+j)==(n-1))
        {
        sum1=sum1+arr[i][j];
    }
}
    cout<<abs(sum-sum1);
        

    return 0;
}
