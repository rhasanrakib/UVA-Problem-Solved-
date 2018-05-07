#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<int,int> mp;
	map<int,int> :: iterator it;
	int test,i,j,k,num;
	while(cin>>test)
	{
		if(test==0)break;
		while(test--)
		{
			k=5;
			while(k--)
			{
				cin>>num;
				mp[num]++;
			}
		}
		int mx=0;
		int cnt=0;
		for(it=mp.begin();it!=mp.end();it++)
		{
			if(it->second>mx)
				mx=it->second;
		}
		for(it=mp.begin();it!=mp.end();it++)
		{
			if(it->second==mx)
				cnt++;
		}
		cout<<cnt<<endl;
	}
	
}