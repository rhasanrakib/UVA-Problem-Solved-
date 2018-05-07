#include<bits/stdc++.h>
using namespace std;
long long taken[1000001];
vector<long long >depends[1000001];
vector<long long >ans;
int ok;
bool nai;
void clean()
{
    for(long long i=0;i<1000001;i++)
    {
        depends[i].clear();
    }
    ans.clear();
    memset(taken,0,sizeof(taken));
}
void dfs(long long int t)
{
    long long i,u;
    taken[t]=1;
    for(i=0;i<depends[t].size();i++)
    {
        u=depends[t][i];
        if(taken[u]==0)
        {
            dfs(u);
        }
        else if(taken[u]==1)
        {
            nai=false;
            //return;
        }
    }
    ans.push_back(t);
    taken[t]=2;
}
int main()
{
    ///freopen("11686.txt","r",stdin);
    long long i,j,k,u,v,n,m;
    while(scanf("%lld %lld",&n,&m)==2)
    {
        if(n==0 && m==0)
        {
            break;
        }
        for(i=0;i<m;i++)
        {
            cin>>u>>v;
            depends[u].push_back(v);
        }
        nai=true;
        for(i=1;i<=n;i++)
        {
            if(taken[i]==0)
            {
                dfs(i);
            }
        }
        if(nai)
        for(i=n-1;i>=0;i--)
        {
            printf("%lld\n",ans[i]);
        }
        else
        {
            printf("IMPOSSIBLE\n");
        }
        clean();
    }
    return 0;
}
