/**
UVa
459 - Graph Connectivity
**/


#include<bits/stdc++.h>
using namespace std;

int parent[3000];
int finds(int a)
{
    if(parent[a]==a)
        return a;
    else
        return parent[a]=finds(parent[a]);

}
void make_parent(int range)
{
    for(int i=1; i<=range; i++)
    {
        parent[i]=i;
    }
    return;
}
void unions(int a, int b)
{
    int u = finds(a);
    int v = finds(b);
    if(u!=v)
    {
        parent[u]=v;
    }

    return;
}

int main()
{
    int cases;
    while(cin>>cases)
    {
        while(cases--)
        {

            memset(parent,-1,sizeof(parent));
            char maxChar;
            cin>>maxChar;
            int sz = maxChar-'A'+1;
            make_parent(sz);
            cin.ignore();
            string ss;
            while(getline(cin, ss)&&ss!="")
            {
                //cout<<"paisi"<<endl;
                unions(ss[0]-'A'+1,ss[1]-'A'+1);
            }
            int cnt=0;
            int arr[sz+1];
            memset(arr,0,sizeof(arr));
            for(int i=1; i<=sz; i++)
            {
                arr[finds(i)]++;
                //cout<<arr[i]<<" ";
            }
            for(int i=1; i<=sz; i++)
            {
                if(arr[i]!=0)
                    cnt++;
            }

            cout<<cnt<<endl;
            if(cases)
                cout<<endl;
        }

    }
    return 0;

}
