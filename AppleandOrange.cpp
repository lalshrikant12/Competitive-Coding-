#include<iostream>
using namespace std;
int main()
{
  unsigned int s,t;
unsigned int a,b;
unsigned int m,n;
int count=0 ,count2=0;
    
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    int p[m],q[n];   


    for(int i=0;i<m;i++)
    {
        cin>>p[i];
    }
    for(int j=0;j<n;j++)
    {
        cin>>q[j];
    }
    for(int i=0;i<m;i++)
    p[i]=p[i]+a;
for(int j=0;j<n;j++)
    q[j]=q[j]+b;
    for(int i=0;i<m;i++)
    {
        if(p[i]>=s && p[i]<=t)
        {
        count++;
    }
    }
    for(int j=0;j<m;j++)
    {
        if(q[j]>=s && q[j]<=t)
        {
         count2++;
        }
    }
    cout<<count<<endl<<count2;
    return 0;
    
    
}
