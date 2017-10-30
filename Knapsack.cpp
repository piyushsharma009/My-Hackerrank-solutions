#include <bits/stdc++.h>

using namespace std;


int main()
{ int t;
 cin>>t;
 for(int p=0;p<t;p++)
     {
	int m,n;
//	cout<<"enter amount to convert";
	
//	cout<<"enter number of dinominations";
	cin>>n>>m;
	vector<int> dinominations(n);
//	cout<<"now enter the dinominations";
	for (int i = 0; i < n; ++i)
	{
		cin>>dinominations[i];
	}
	std::vector<int> v(m+1);
	v[0] = 0;
	for(int i=1;i<=m;i++)
	{
		v[i]= 100000;
		for(int j=0;j<dinominations.size();j++)
		{
			if(dinominations[j]<= i)
			{
				v[i] =min(v[i],v[i-dinominations[j]]+1);
			}

		}
	}
     int pm=0;
	for(int i=m;i>=0;i--)
	{if(v[i]!=100000)
    {	cout<<i<<'\n';pm++;
    break;
    }
	}if(pm==0)
	cout<<0<<'\n';
 }
	return 0;
}
