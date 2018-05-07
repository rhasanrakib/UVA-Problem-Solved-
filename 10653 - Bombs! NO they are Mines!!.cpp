#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
ll n,m;
int sx,sy,dx,dy;
int V[1000][1000];
bool visited[1000][1000];
int d[1000][1000];
void bfs()
{
    ///cout<<"Paisi"<<endl;
    int tx,ty;
    queue<pair<int,int> >Q;
    pair<int,int>top;
    memset(visited,false,sizeof(visited));
    memset(d,false,sizeof(d));
    visited[sx][sy]=true;
    d[sx][sy]=0;
    Q.push(make_pair(sx,sy));
    while(!Q.empty())
    {
        top=Q.front();
        Q.pop();
        for(int i=0; i<4; i++)
        {
            tx=top.first+fx[i];
            ty=top.second+fy[i];
            if(tx>=0 && tx<n && ty>=0 && ty<m && V[tx][ty]!=-1 && visited[tx][ty]==false)
            {

                d[tx][ty]=d[top.first][top.second]+1;
                visited[tx][ty]=true;
                Q.push(make_pair(tx,ty));
            }
        }
    }
    cout<<d[dx][dy]<<endl;
}

int main()
{
    ///freopen("10653.txt","r",stdin);
    int u,k,v,test,nai;
    while(cin>>n>>m)
    {
        memset(V,0,sizeof(V));
        if(n==0 && m==0)
        {
            break;
        }
        cin>>test;
        while(test--)
        {
            cin>>u>>k;
            while(k--)
            {
                cin>>v;
                V[u][v]=-1;
            }
        }
        cin>>sx>>sy;
        cin>>dx>>dy;
        bfs();
    }
    return 0;
    ///main();
}
