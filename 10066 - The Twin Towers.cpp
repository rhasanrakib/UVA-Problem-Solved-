#include<bits/stdc++.h>
using namespace std;
int s[1000],ss[1000];
int dp[109][109];
int n1,n2;
int func(int pos1,int pos2) ///LCS function
{
    if(pos1==n1 || pos2==n2)
    {
        return 0;
    }
    if(dp[pos1][pos2]!=-1)
    {
        return dp[pos1][pos2];
    }
    int ans;
    if(s[pos1]==ss[pos2])
    {
        ans=1+func(pos1+1,pos2+1);
    }
    else
    {
        int x=func(pos1+1,pos2);
        int y=func(pos1,pos2+1);
        ans=max(x,y);
    }
    dp[pos1][pos2]=ans;
    return dp[pos1][pos2];
}
int main()
{
    int kase=1;
    while(cin>>n1>>n2)
    {
        if(n1==0 && n2==0)break;
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<n1;i++)cin>>s[i];
        for(int i=0;i<n2;i++)cin>>ss[i];
        int aa=func(0,0);
        printf("Twin Towers #%d\n",kase++);
        printf("Number of Tiles : %d\n\n",aa);
    }
}
