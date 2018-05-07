#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
int start;
vector<int>V[5000];
int d[10000];
bool visited[10000];
int em[50000];
void bfs()
{
    memset(visited,false,sizeof(visited));
    memset(d,0,sizeof(d));
    memset(em,0,sizeof(em));
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
   // freopen("924.txt","r",stdin);
    int test,nai=1,ok,i,j,u,v,n,m,k;
    cin>>test;
    for(u=0; u<test; u++)
    {
        cin>>k;
        while(k--)
        {
            cin>>v;
            V[u].pb(v);
        }
    }
    cin>>ok;
    while(ok--)
    {
        cin>>start;
        bfs();
        for(int i=0; i<test; i++)
        {
            if(d[i]!=0)
                  em[d[i]]++;
            ///cout<<d[i]<<endl;
        }
        int mx=0;
        ///int mn=99999999;
        int ind=0;
        for(int i=0; i<test; i++)
        {
            if(em[i]>mx)
            {
                mx=em[i];
                ind=i;
            }
        }
        /*if(mx==1)
        {
            cout<<mx<<" "<<"1"<<endl;
        }
        else */if(ind==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<mx<<" "<<ind<<endl;
        }
    }
    clean();
    return 0;
}
