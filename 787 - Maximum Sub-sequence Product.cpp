/**
	Problem Name:787 - Maximum Sub-sequence Product
	OJ:UVA
	Category:Maximum Sub-array product
	Author :Rakibul Hasan
	(Dept. CSE,MBSTU)
	Date :28-05-2017

*/

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pi acos(-1)
typedef long long ll;
vector<ll>ara;

int main()
{
    ///freopen(".txt","r",stdin);
    ///freopen(".txt","w",stdout);
    char ch;
    ll i,j=1,k;
    ll max_value,min_value,max_far;
    while(1)
    {
        max_value=1,min_value=1,max_far=1;
        for(i=0;; i++)
        {
            cin>>k;
            if(k==-999999)
            {
                break;
            }
            ara.push_back(k);
        }
        if(ara.size()==1)
        {
            max_value=ara[0];
        }
        for(i=0;i<ara.size();i++)
        {
            if(ara[i]>0)
            {
                max_value=(max_value*ara[i]);
                min_value=min(min_value*ara[i],j);
            }
            else if(ara[i]==0)
            {
                max_value=1;
                min_value=1;
            }
            else
            {
                int temp=max_value;
                max_value=max(min_value*ara[i],j);
                min_value=temp*ara[i];
            }
            max_far=min(max_far,max_value);
        }
        cout<<max_far<<endl;
        ara.clear();
    }

    return 0;
}

