#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<string,int>mp;
	mp["zero"]=0;mp["one"]=1;mp["two"]=2;mp["three"]=3;
	mp["four"]=4;mp["five"]=5;mp["six"]=6;mp["seven"]=7;
	mp["eight"]=8;mp["nine"]=9;mp["ten"]=10;mp["eleven"]=11;
	mp["twelve"]=12;mp["thirteen"]=13;mp["fourteen"]=14;mp["fifteen"]=15;
	mp["sixteen"]=16;mp["seventeen"]=17;mp["eighteen"]=18;mp["nineteen"]=19;
	mp["twenty"]=20;mp["thirty"]=30;mp["forty"]=40;mp["fifty"]=50;
	mp["sixty"]=60;mp["seventy"]=70;mp["eighty"]=80;mp["ninety"]=90;
	mp["hundred"]=100;mp["thousand"]=1000;mp["million"]=1000000;mp["negative"]=-1;
	string s;
	int sum,num;
	while(getline(cin,s))
	{
		stringstream ss;
		string temp;
		ss<<s;
		sum=0;num=0;
		int flag=0;
		int neg=1;;
		while(ss>>temp)
		{
			
			if(mp[temp]==100)
			{
				num=num*100;
			}
			else if(mp[temp]==1000)
			{
				sum+=num*1000;
				num=0;
			}
			else if(mp[temp]==1000000)
			{
				sum+=num*1000000;
				num=0;
			}
			else if(mp[temp]==-1)
			{
				neg=-1;;
			}
			else
				num+=mp[temp];
		}
		sum+=num;
		cout<<sum*neg<<endl;
	}
}