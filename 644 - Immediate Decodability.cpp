#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s[10000];
    int i,j,k,l=0,m=0;
    while(cin>>s[m])
    {
        if(s[m]=="9")
        {
            int flag=1;
            sort(s,s+m);
            printf("Set %d ",++l);
            for(i=0; i<m-1; i++)
            {
                int len1=s[i].length();
                int len2=s[i+1].length();
                if(len1<len2)
                {
                    if(s[i+1].substr(0,len1)==s[i])
                    {
                        printf("is not immediately decodable\n");
                        flag=0;
                        break;
                    }
                }
                else if(len1==len2)
                {
                    if(s[i]==s[i+1])
                    {
                        printf("is not immediately decodable\n");
                        flag=0;
                        break;
                    }
                }
                else
                {
                    if(s[i].substr(0,len2)==s[i+1])
                    {
                        printf("is not immediately decodable\n");
                        flag=0;
                        break;
                    }
                }
            }
            if(flag)
                printf("is immediately decodable\n");
            for(i=0; i<m; i++)s[i].clear();
            m=0;
        }
        else
        {
            m++;
        }
    }
}
