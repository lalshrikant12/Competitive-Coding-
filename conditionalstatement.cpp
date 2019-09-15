/*Given a positive integer denoting , do the following:

If 1<=n<=9, then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.).
If n>9, print Greater than 9.
Input Format

A single integer denoting n.

Constraints 1<=n<=10^9


Output Format

If 1>=n>=9, then print the lowercase English word corresponding to the number (e.g., one for 1, two for 2, etc.); otherwise, print Greater than 9 instead.*/





#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if(n==1)
    {
    cout<<"one"<<endl;}
    else if(n==2)
    {cout<<"two"<<endl;}
    else if(n==2)
    {cout<<"three"<<endl;}
    else if(n==3)
    {cout<<"three"<<endl;}
    else if(n==4)
    {cout<<"four"<<endl;}
    else if(n==5)
   { cout<<"five"<<endl;}
    else if(n==6)
   { cout<<"six"<<endl;}
    else if(n==7)
    {cout<<"seven"<<endl;}
    else if(n==8)
    {cout<<"eight"<<endl;}
    else if(n==9)
   { cout<<"nine"<<endl;}
    else
   { cout<<"greater than nine"<<endl;}
    
    // Write Your Code Here

    return 0;
}



