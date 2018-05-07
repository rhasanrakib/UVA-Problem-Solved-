#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,i,j,nn=0;
    int nccncode[200],ccncode[200],ara[200];
    queue<char>q;
    char s1[100000],s2[100000];
    cin>>test;
    getchar();
    getchar();
    while(test--)
    {
        gets(s1);
        gets(s2);
        int len1,len2;
        memset(nccncode,0,sizeof(nccncode));
        memset(ccncode,0,sizeof(ccncode));
        len1=strlen(s1);
        len2=strlen(s2);
        for(i=0; i<len1; i++)
        {
            if((s1[i]>='A' && s1[i]<='Z')||( s1[i]>='a' && s1[i]<= 'z'))
            {
                nccncode[s1[i]]++;
            }
        }
        for(i=0; i<len2; i++)
        {
            if((s2[i]>='A' && s2[i]<='Z')||(s2[i]>='a' && s2[i]<='z'))
            {
                ccncode[s2[i]]++;
                q.push(s2[i]);
            }
        }
        if(nn!=0)cout<<endl;
        nn=1;
        while(!q.empty())
        {
            char ch=q.front();
            q.pop();
            int nai=ch;
            int fre=ccncode[nai];
            //cout<<fre<<endl;
            if(fre==0)continue;
            int mn=9999999;
            int idx;
            for(i=0; i<200; i++)
            {
                if(nccncode[i]!=0)
                {
                    if(abs(fre-nccncode[i])<mn)
                    {
                        mn=abs(fre-nccncode[i]);
                        idx=i;
                        ///cout<<idx<<endl;
                    }
                }
            }
            ara[nai]=idx;
            ccncode[nai]=0;
            nccncode[idx]=0;
        }
        for(i=0;i<len2;i++)
            printf("%c",ara[s2[i]]);
        cout<<endl;
    }
    return 0;
}
