#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
int main()
{
   /* freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);*/

    mp["January"]=1;
    mp["February"]=2;
    mp["March"]=3;
    mp["April"]=4;
    mp["May"]=5;
    mp["June"]=6;
    mp["July"]=7;
    mp["August"]=8;
    mp["September"]=9;
    mp["October"]=10;
    mp["November"]=11;
    mp["December"]=12;
    char ss[10000];
    char mm1[100];
    char mm2[100];
    long long y1,y2,year,dd1,dd2,i,j,test,kase,m1,m2,no4,no10,no40;
    cin>>test;
    getchar();
    for(kase=1; kase<=test; kase++)
    {
        gets(ss);
        sscanf(ss,"%s %lld, %lld",mm1,&dd1,&y1);
        gets(ss);
        sscanf(ss,"%s %lld, %lld",mm2,&dd2,&y2);
        m1=mp[mm1];
        m2=mp[mm2];
        long long cnt=0;
        if(m1>2)
        {
            y1++;
        }
        if(m2<=2)
        {
            if(m2==2)
            {
                if(dd2<29)
                y2--;
            }
            else
                y2--;
        }
        no4=((y2/4)-((y1-1)/4));
        no10=((y2/100)-((y1-1)/100));
        no40=((y2/400)-((y1-1)/400));
        cnt=no4-no10+no40;
        printf("Case %lld: %lld\n",kase,cnt);
    }
    return 0;
}
