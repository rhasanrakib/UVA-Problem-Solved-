/**
	Problem Name:Super Sale
	OJ:UVA
	Category:Dp
	Author :Rakibul Hasan
	(Dept. CSE,MBSTU)
	Date :20-04-17

*/

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pi acos(-1)
typedef long long ll;
vector<int>V;
int dp[1000][1000];
int weight[10000],price[10000];
int n,W;
int f(int pos,int mw)
{
    if(pos>=n)
    {
        return 0;
    }
    if(dp[pos][mw]!=-1)
    {
        return dp[pos][mw];
    }
    int profit1=0,profit2=0;
    if((W>=(mw+weight[pos])))
    {
        profit1=price[pos]+f(pos+1,(mw+weight[pos]));
    }
    profit2=f(pos+1,mw);
    dp[pos][mw]=max(profit2,profit1);
    return dp[pos][mw];
}
int main()
{
    ///freopen(".txt","r",stdin);
    ///freopen(".txt","w",stdout);
    int test,t,i,j,k,g;
    cin>>test;
    for(t=1; t<=test; t++)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>price[i]>>weight[i];
        }
        k=0;
        cin>>g;
        while(g--)
        {
            cin>>W;
            memset(dp,-1,sizeof(dp));
            k+=f(0,0);
        }
        cout<<k<<endl;
    }
    return 0;
}

