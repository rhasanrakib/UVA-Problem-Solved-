
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="";
    char str[10000];
    map<string,int>mp;
    map<string,int>::iterator it;
    while(gets(str))
    {
        int len=strlen(str);
        for(int i=0;i<len;i++)
        {
            if(str[i]>='A' && str[i]<='Z')
            {
                str[i]=str[i]+32;
            }
            else if(str[i]>='a' && str[i]<='z')
                continue;
            else
                str[i]=' ';
        }
        //printf("%s\n",str);
        s=s+str;
        stringstream ss;
        ss<<s;
        string temp;
        while(ss>>temp)
        {
            mp[temp]=1;
        }
        s.clear();
    }
    for( it=mp.begin(); it!=mp.end(); it++)
        cout<<it->first<<endl;

}
