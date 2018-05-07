#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
int start=0;
vector<int>V[5000];
int d[10000];
bool visited[10000];
void bfs()
{
    memset(visited,false,sizeof(visited));
    memset(d,0,sizeof(d));
    queue<int>Q;
    visited[start]=true;
    d[start]=0;
    Q.push(start);
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        for(int i=0; i<V[u].size(); i++)
        {
            int v=V[u][i];
            if(visited[v]==false)
            {
                d[v]=d[u]+1;
                visited[v]=true;
                Q.push(v);
            }
        }
    }
}
void clean()
{
    for(int i=0; i<1000; i++)
    {
        V[i].clear();
    }
}
int main()
{
    ///freopen("risk.txt","r",stdin);
    int test,nai=1,ok,i,j,u,v,n,m;
    cin>>test;
    while(test--){
        cin>>n>>m;
        for(int i=0;i<m;i++)
        {
            cin>>u>>v;
            V[u].pb(v);
            V[v].pb(u);
        }
        bfs();
        for(int i=1;i<n;i++)
        {
            cout<<d[i]<<endl;
        }
        if(test>=1)
        {
            cout<<endl;
        }
        clean();
    }

    return 0;
}
