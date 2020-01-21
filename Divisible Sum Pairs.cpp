/* You are given an array of  integers, , and a positive integer, . Find and print the number of  pairs where  and  +  is divisible by .

For example,  and . Our three pairs meeting the criteria are  and .

Function Description

Complete the divisibleSumPairs function in the editor below. It should return the integer count of pairs meeting the criteria.

divisibleSumPairs has the following parameter(s):

n: the integer length of array 
ar: an array of integers
k: the integer to divide the pair sum by
Input Format

The first line contains  space-separated integers,  and .
The second line contains  space-separated integers describing the values of .

Constraints

Output Format

Print the number of  pairs where  and  +  is evenly divisible by .

Sample Input

6 3
1 3 2 6 1 2
Sample Output

 5
Explanation

Here are the  valid pairs when :   */

#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    int arr[n];
    
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    for(int j=i+1;j<n;j++)
    {
        if  (((arr[i]+arr[j])%k) ==0)
        {
        count++;
     }
    }
    cout<<count;
    return 0;
}
