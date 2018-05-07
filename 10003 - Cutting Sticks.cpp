#include<bits/stdc++.h>
using namespace std;
int ara[100];
int dp[100][100];
int func(int be,int ed)
{

    if(be>=ed-1)
    {
        return dp[be][ed]=0;
    }
    if(dp[be][ed]!=-1)
    {
        return dp[be][ed];
    }
    int mn=9999999;
    for(int mid=be+1; mid<ed; mid++)
    {
            int left=func(be,mid);
            int right=func(mid,ed);
            int current=ara[ed]-ara[be];
            int sum=left+right+current;
            mn=min(mn,sum);
    }
    return dp[be][ed]=mn;
}
int main()
{
    int l,n,i,j,temp;
    while(scanf("%d",&l)==1)
    {
        if(l==0)
        {
            break;
        }
        memset(dp,-1,sizeof(dp));
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            scanf("%d",&ara[i]);
        }
        ara[0]=0;ara[n+1]=l;
        //int result=func(0,n+1);
        printf("The minimum cutting is %d.\n",func(0,n+1));
    }
    return 0;
}
