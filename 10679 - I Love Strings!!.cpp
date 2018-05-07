#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,temp;
	int i,j,k,len,test,q;
	cin>>test;
	getchar();
	while(test--)
	{
		cin>>s;
		cin>>q;
		getchar();
		len=s.length();
		while(q--)
		{
			int flag=0;
			cin>>temp;
			j=0;
			for(i=0;i<len;i++)
			{
				if(s[i]==temp[j])
				{
					j++;
				}
				else
					j=0;
				if(j==temp.length())
				{
					cout<<"y"<<endl;
					flag=1;
					break;
				}
			}
			if(flag==0)cout<<"n"<<endl;
		}
	}
}