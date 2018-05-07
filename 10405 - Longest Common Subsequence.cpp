#include<bits/stdc++.h>
using namespace std;
string s,ss;
int dp[1009][1009];
int lcs(int pos1,int pos2)
{
    if(s[pos1]=='\0' || ss[pos2]=='\0')
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
        ans=1+lcs(pos1+1,pos2+1);
    }
    else
    {
        int x=lcs(pos1+1,pos2);
        int y=lcs(pos1,pos2+1);
        ans=max(x,y);
    }
    dp[pos1][pos2]=ans;
    return dp[pos1][pos2];
}
int main()
{
    while(getline(cin,s))
    {
        getline(cin,ss);
        memset(dp,-1,sizeof(dp));
        int result=lcs(0,0);
        cout<<result<<endl;
    }
}
