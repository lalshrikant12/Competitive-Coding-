#include<bits/stdc++.h>
using namespace std;
#define long long int
int main()
{

	int N;
	cin>>N;
	vector<int> ds;
	int p;
	for(int i=0;i<N;i++)
	{
		cin>>p;
		ds.push_back(p);
	}
	
	int count=0;
	int count2=0;
	int maximum=ds[0];

	for(int i=0;i<ds.size();i++)
	{	
		count=0;
		for(int j=0;j<ds.size();j++)
		{
			if(ds[i]==ds[j])
			{
				count++;
			}
		}
		
		if(count>count2)
		{	count2=count;
			maximum=ds[i];
		}
		
		
		

	}
	cout<<maximum;

	return 0;
}


