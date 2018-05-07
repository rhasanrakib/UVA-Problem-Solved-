#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int i,j,k,l=0,test;
	map<string,int>mp;
	map<string,int>::iterator it;
	cin>>test;
	getchar();
	getchar();
	while(test--)
	{
	    mp.clear();
		int cnt=0;
		while(getline(cin,s))
		{
			if(s.length()==0)break;
			mp[s]++;
			cnt++;
		}
		for(it=mp.begin();it!=mp.end();it++)
		{
			double per =(double)((it->second/(cnt*1.0))*100.00);
			cout<<it->first;
			printf(" %.4lf\n",per);
		}
		if(test!=0)
            cout<<endl;
	}
}
