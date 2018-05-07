#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,vowelf,vowels,vowelt,cnt;
    string s;
    int ara[5];
    while(getline(cin,s))
    {
        if(s=="e/o/i") break;
        int len=s.length();
        memset(ara,0,sizeof(ara));
        cnt=0;
        int flag=1;
        for(i=0; i<len; i++)
        {
            if(s[i]=='/')
            {
                cnt++;
                flag=1;
            }
            else if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
            {
                if(flag)
                {
                    ara[cnt]++;
                    flag=0;
                }
            }
            else
                flag=1;
        }
        /*for(i=0;i<3;i++)
            cout<<ara[i]<<endl;*/

        if(ara[0]==5 && ara[1]==7 && ara[2]==5)
			cout<<"Y"<<endl;
        else if(ara[0]!=5 && ara[1]==7 && ara[2]==5)
           	cout<<1<<endl;
        else if(ara[0]==5 && ara[1]!=7 && ara[2]==5)
            cout<<2<<endl;
        else if(ara[0]==5 && ara[1]==7 && ara[2]!=5)
            cout<<3<<endl;
        else
            {
                if(ara[0]!=5 && ara[1]!=7 && ara[2]!=5)
                    cout<<1<<endl;
                else if(ara[0]!=5 && ara[1]!=7 && ara[2]==5)
                    cout<<1<<endl;
                else if(ara[0]!=5 && ara[1]==7 && ara[2]!=5)
                    cout<<1<<endl;
                else if(ara[0]=5 && ara[1]!=7 && ara[2]!=5)
                    cout<<2<<endl;
            }
    }
}
