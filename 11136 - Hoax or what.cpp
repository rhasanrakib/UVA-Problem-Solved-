#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long day,man,i,j,num;
	while(cin>>day)
	{
		if(day==0)break;
		map<long long ,long long >mp;
		map<long long ,long long >::iterator it;
		long long prize=0,low,high;
		while(day--)
		{
			cin>>man;
			while(man--)
			{
				cin>>num;
				mp[num]++;
			}
			it=mp.begin();
			low=it->first;
			if(it->second==1)
				mp.erase(low);
			else
				mp[low]--;
			it=mp.end();
			it--;
			high=it->first;
			if(it->second==1)
				mp.erase(high);
			else
				mp[high]--;
			prize+=(high-low);
		}
		cout<<prize<<endl;
	}
}