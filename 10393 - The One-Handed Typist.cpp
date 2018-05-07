#include<bits/stdc++.h>
using namespace std;
string lst[10]= {"qaz","wsx","edc","rfvtgb"," "," ","yhnujm","ik,","ol.","p;/"};
int indx[20];
map<string ,int >::iterator it;
bool chk(string s,int n)
{
    int len=s.length();
    int i,j,k,l;
    string temp;
    for(j=0; j<n; j++)
    {
        int mn=indx[j]-1;
       // cout<<mn<<endl<<endl;
        temp=lst[mn];
        //cout<<temp<<endl<<endl;
        int ar=temp.length();
        for(i=0; i<len; i++)
        {
            for(k=0; k<ar; k++)
            {
                if(s[i]==temp[k])
                {
                    return false;
                }
            }
        }
    }
    return true;
}
int main()
{
    /*freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);*/
    int line,word,i,j;
    string inp;
    while(cin>>word>>line)
    {
        map<string,int>mp;
        vector<string>V,store;
        for(i=0; i<word; i++)cin>>indx[i];
        int mx=0;
        getchar();
        while(line--)
        {
            cin>>inp;
            int len=inp.length();
            if(chk(inp,word))
            {
                if(len>=mx)
                {
                    mx=len;
                    V.push_back(inp);
                }
            }
        }
        sort(V.begin(),V.end());
        int cnt=0;
        for(i=0; i<V.size(); i++)
        {
            if(V[i].length()==mx)
            {
                mp[V[i]]++;
            }
        }
        cout<<mp.size()<<endl;
        for(it=mp.begin(); it!=mp.end(); it++)
            cout<<it->first<<endl;
    }
    return 0;
}
