#include<bits/stdc++.h>
using namespace std;

int maximum_spanning_tree(vector<pair<int,int>>edges[],int start,int des,int node)
{
    bool visited[300];
    memset(visited,false,sizeof(visited));
    int cost=100009;

    priority_queue<pair<int,int>>PQ; //<cost,node>
    PQ.push(make_pair(999999,start));
    while(!PQ.empty())
    {
        pair<int,int>p;
        p=PQ.top();
        PQ.pop();
        int u = p.second;
        if(!visited[u])
        {
            visited[u]=true;
            cost=min(cost,p.first);
            if(u==des)
            {
                break;
            }
            for(int i=0;i<edges[u].size();i++)
            {
                int v = edges[u][i].second;
                //cout<<v<<endl;
                if(!visited[v])
                {
                    //cout<<edges[u][i].first<<endl;
                    PQ.push(make_pair(edges[u][i].first,edges[u][i].second));
                }
            }
        }
    }


    return cost;
}


int main()
{
    int n,r,cases=1;;
    while(cin>>n>>r)
    {
        if(n==0 && r==0)
            break;
        map<string,int>mp;
        vector<pair<int,int>> edges[300];
        string s,ss;
        int cost;
        int a=0;
        for(int i=0;i<r;i++)
        {
            cin>>s>>ss>>cost;
            int u,v;
            if(mp.find(s)!=mp.end())
            {
                u=mp[s];
            }
            else
            {
                mp[s]=a++;
                //a++;
                u=mp[s];
            }
            if(mp.find(ss)!=mp.end())
            {
                v=mp[ss];
            }
            else
            {
                mp[ss]=a++;
                //a++;
                v=mp[ss];
            }

            edges[u].push_back(make_pair(cost,v));
            edges[v].push_back(make_pair(cost,u));
        }
        string start,des;
        cin>>start>>des;
        cout<<"Scenario #"<<cases++<<endl;
        cout<<maximum_spanning_tree(edges,mp[start],mp[des],n)<<" tons"<<endl<<endl;;
    }
}
