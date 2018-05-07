#include<bits/stdc++.h>
using namespace std;
int taken[150];
vector<int>depends[101];
vector<int>ans;
void clean()
{
    for(int i=0;i<105;i++)
    {
        depends[i].clear();
    }
    ans.clear();

}
void dfs(int t)
{
    int u;
    taken[t]=1;
    for(int i=0; i<depends[t].size(); i++)
    {
        u=depends[t][i];
        if(taken[u]==0)
        {

            dfs(u);
        }
    }
    ans.push_back(t);
}

int main()
{
    int n,m,i,j,k,u,v;
    while(scanf("%d %d",&n,&m)==2)
    {
        if(n==0 && m==0)
        {
            break;
        }
        memset(taken,0,sizeof(taken));

        for(i=0; i<m; i++)
        {
            cin>>u>>v;
            depends[u].push_back(v);
        }
        for(i=1; i<=n; i++)
        {
            if(taken[i]==0)
            {
                dfs(i);
            }
        }
        for(i=n-1;i>=0;i--)
        {
            printf("%d",ans[i]);
            if(i!=0)
            {
                printf(" ");
            }
        }
        printf("\n");
        clean();
    }
    return 0;
}
