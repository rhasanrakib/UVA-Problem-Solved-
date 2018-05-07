#include<bits/stdc++.h>
using namespace std;

string rev(int num)
{
    string s="";
    char ss[100];
    int j=0;
    while(num!=0)
    {
        ss[j++]=(num%10)+'0';
        num=num/10;
    }
    ss[j]='\0';
    s=s+ss;
    return s;
}
int main()
{
    int n,ok,i,j;
    string taken;
    while(getline(cin,taken))
    {
        string add="";
        string temp;
        int len=taken.length()-1;
        int sum=0;
        for(i=len; i>=0; i--)
        {
            if((taken[i]>='A' && taken[i]<='Z')||(taken[i]>='a' && taken[i]<='z')||
                    taken[i]==' '||taken[i]=='!'||taken[i]==','||taken[i]=='.'||taken[i]==':'||
                    taken[i]==';'||taken[i]=='?')

            {
                int a=taken[i];

                temp=rev(a);
                add=add+temp;
                sum=0;
            }
            else if(taken[i]>='0' && taken[i]<='9')
            {
                sum=sum*10+(taken[i]-'0');
                char ch=sum;
                if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z')||
                    ch==' '||ch=='!'||ch==','||ch=='.'||ch==':'||
                    ch==';'||ch=='?')
                    {
                        add=add+ch;
                        sum=0;
                    }
            }
        }
        cout<<add<<endl;
    }
}
