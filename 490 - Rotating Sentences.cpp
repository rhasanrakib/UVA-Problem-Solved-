#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<string>v;
	int i,j,k,l,m,n,mx=0;
	string s;
	while(getline(cin,s))
	{
		v.push_back(s);
		mx=max(mx,(int)s.length());
	}
	for(i=0;i<mx;i++)
	{
		for(j=v.size()-1;j>=0;j--)
		{
			if(i<v[j].length())
				printf("%c",v[j][i]);
			else
				printf(" ");
		}
		cout<<endl;
	}
}