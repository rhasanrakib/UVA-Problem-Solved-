#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;
int fx[]= {+0,+0,+1,-1,-1,+1,-1,+1};
int fy[]= {-1,+1,+0,+0,+1,+1,-1,-1};
ll n,m;
int V[1000][1000];
void bfs(int row,int col)
{
    ///cout<<"Paisi"<<endl;
    int tx,ty;
    bool visited[100][100];
    int d[100][100];
    queue<pair<int,int> >Q;
    pair<int,int>top;
    memset(visited,false,sizeof(visited));
    memset(d,false,sizeof(d));
    visited[row][col]=true;
    //d[row][col]=0;
    Q.push(make_pair(row,col));
    while(!Q.empty())
    {
        top=Q.front();
        Q.pop();
        for(int i=0; i<8; i++)
        {
            tx=top.first+fx[i];
            ty=top.second+fy[i];
            if(tx>=0 && tx<n && ty>=0 && ty<m && V[tx][ty]==5 && visited[tx][ty]==false)
            {

                //d[tx][ty]=d[top.first][top.second]+1;
                V[tx][ty]=-1;
                visited[tx][ty]=true;
                Q.push(make_pair(tx,ty));
            }
        }
    }
}
/*void clean()
{
    for(int i=0; i<1000; i++)
    {
        V[i].clear();
    }
}*/
int main()
{
    freopen("11953.txt","r",stdin);
    ///freopen("11953w.txt","w",stdout);
    char s;
    int t;
    cin>>t;
    for(int nai=1; nai<=t; nai++)
    {
        cin>>n;
        getchar();
        m=n;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>s;
                ///getchar();
                if(s=='@')
                {
                    V[i][j]=-1;
                }
                if(s=='x')
                {
                    V[i][j]=5;
                }
                if(s=='.')
                {
                    V[i][j]=0;
                }
            }
        }

        ///cheack//
        /*for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cout<<V[i][j]<<" ";
            }
            cout<<endl;
        }*/
        ///Check end//
        int kount=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(V[i][j]==5)
                {
                    kount++;
                    ///cout<<i<<" "<<j<<endl;
                    bfs(i,j);
                }
            }
        }
        /*for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(V[i][j]==5)
                {
                    kount++;
                }
            }
        }*/
        printf("Case %d: %d\n",nai,kount);
        //clean();
    }

    ///main();
}
