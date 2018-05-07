#include<bits/stdc++.h>
using namespace std;
int parent[100];
int cnt[30];
int finds(int n)
{
    if(parent[n]==n)
    {
        return n;
    }
    parent[n]=finds(parent[n]);
    return parent[n];
}
void unions(int a,int b)
{
    int u=finds(a);
    int v=finds(b);
    if(u==v)
    {
        return;
    }
    else
    {
        parent[v]=u;
        printf("%c is the parent of %c\n",u+64,v+64);
    }
}
void makeset(int n)
{
    for(int i=1; i<=n; i++)
    {
        parent[i]=i;
    }
}
int main()
{
    int n,u,v,kase,test;
    char ch;
    char str[3];
    cin>>test;
    while(test--)
    {
        cin>>ch;
        getchar();
        n=ch-64;
        //cout<<n<<endl;
        makeset(n);
        int cn=0;
        while(gets(str))
        {
            if(strlen(str)==0)
            {
                break;
            }
            u=str[0]-64;
            //cout<<"u "<<u<<endl;
            v=str[1]-64;
            //cout<<"v "<<v<<endl;
            ++cn;
            unions(u,v);
        }
        memset(cnt,0,sizeof(cnt));
        for(int i=1;i<=cn;i++)
        {
            finds(parent[i]);
        }
        for(int i=1;i<=n;i++)
        {
            cnt[parent[i]]++;
        }
        int sum=0;
        for(int i=1;i<=26;i++)
        {
            if(cnt[i]!=0)
            {
                sum++;
            }
        }
        cout<<sum<<endl;
    }
}
