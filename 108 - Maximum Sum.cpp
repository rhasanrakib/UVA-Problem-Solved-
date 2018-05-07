#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l;
    int ara[150][150];
    int csum[150][150];
    int linear[150];
    while(scanf("%d",&n)==1)
    {
        memset(csum,0,sizeof(csum));
        memset(ara,0,sizeof(ara));
        memset(linear,0,sizeof(linear));
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                scanf("%d",&ara[i][j]);
            }
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                csum[j][i]=csum[j-1][i]+ara[j][i];
            }
        }
        int mx=0;
        for(i=1;i<=n;i++)
        {
            for(j=i;j<=n;j++)
            {
                for(k=1;k<=n;k++)
                {
                    linear[k]=csum[j][k]-csum[i-1][k];
                }
                int sum=0;
                for(int x=1;x<=n;x++)
                {
                    sum+=linear[x];
                    if(sum<0)
                    {
                        sum=0;
                    }
                    mx=max(mx,sum);
                }
            }
        }
        printf("%d\n",mx);
    }
    return 0;
}
