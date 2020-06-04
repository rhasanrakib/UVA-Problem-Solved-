#include<bits/stdc++.h>
using namespace std;

int mstprims(vector<pair<int,int>>edges[],int n)
{
    int cost=0;
    bool visited[n+1];
    memset(visited,false,sizeof(visited));

    priority_queue<pair<int,int>>PQ; //priority_queue<pair<cost,node>>
    PQ.push(make_pair(0,1));//start from node 1 which cost is zero
    while(!PQ.empty())
    {
        pair<int,int>p;
        p=PQ.top();
        PQ.pop();
        int u = p.second; //Assign the node which is the second value of the pair
        if(!visited[u])
        {
            visited[u]=true;
            cost+=-p.first;

            for(int i=0; i<edges[u].size(); i++)
            {
                int v= edges[u][i].second; //accessing adjacency list
                if(!visited[v])
                {
                    PQ.push(make_pair(-edges[u][i].first,edges[u][i].second));
                }
            }
        }
    }

    return cost;
}

int main()
{
    int N;
    //freopen("908 - Re-connecting Computer Sites","r",stdin);
    //freopen("908 - Re-connecting Computer Sites--","w",stdout);
    int t=0;
    while(scanf("%d",&N)==1)
    {
        int edge = N-1;
        vector<pair<int,int>>edges[N+1];//vector<pair<cost,node>>  cause priority queue sort by the key value
        for(int i=0; i<edge; i++)
        {
            int u,v,cost;
            cin>>u>>v>>cost;
            edges[u].push_back(make_pair(cost,v));
            edges[v].push_back(make_pair(cost,u));
        }
        int ans = mstprims(edges,N);
        int K,M;
        for(int i=0; i<edge; i++)
        {
            edges[i].clear();
        }
        cin>>K;
        for(int i=0; i<K; i++)
        {
            int u,v,cost;
            cin>>u>>v>>cost;
            edges[u].push_back(make_pair(cost,v));
            edges[v].push_back(make_pair(cost,u));
        }
        cin>>M;
        for(int i=0; i<M; i++)
        {
            int u,v,cost;
            cin>>u>>v>>cost;
            edges[u].push_back(make_pair(cost,v));
            edges[v].push_back(make_pair(cost,u));
        }
        if(t!=0)
            cout<<endl;
        int ans1 = mstprims(edges,N);
        cout<<ans<<"\n"<<ans1<<endl;
        t=1;
    }
    return 0;
}
