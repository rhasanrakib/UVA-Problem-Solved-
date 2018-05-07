#include<bits/stdc++.h>
using namespace std;
int main()
{
	string temp[10009];
	int i,j,k,l,frst=1,test,n;
	cin>>test;
	while(test--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>temp[i];
		}
		sort(temp,temp+n);
		int flag=0;
		for(i=0;i<n-1;i++)
		{
			int len=temp[i].length();
			for(j=i+1;j<n;j++)
			{
				flag=0;
				int len2=temp[j].length();
				int mn=min(len,len2);
				for(k=0;k<mn;k++)
				{
					if(temp[i][k]!=temp[j][k])
					{
						flag=1;
						break;
					}
				}
				if(flag==0)
				{
					cout<<"NO"<<endl;
					break;
				}
			}
			if(flag==0)
				break;
		}
		if(flag)
			cout<<"YES"<<endl;
	}
}