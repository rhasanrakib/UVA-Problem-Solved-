#include<bits/stdc++.h>
using namespace std;
int value(char ch)
{
    if(ch=='B')
        return 1;
    else if(ch=='U')
        return 10;
    else if(ch=='S')
        return 100;
    else if(ch=='P')
        return 1000;
    else if(ch=='F')
        return 10000;
    else if(ch=='T')
        return 100000;
    else
        return 1000000;
}
int main()
{
    char str[100000];
    int ara[100000];
    int digit[500];
    int test,i;
    cin>>test;
    getchar();
    while(test--)
    {
        cin>>str;
        int len=strlen(str);
        long long nai=0;
        memset(digit,0,sizeof(digit));
        for(i=0; i<len; i++)
        {
            ara[i]=value(str[i]);
            digit[str[i]]++;
            //cout<<digit[str[i]]<<endl;
            nai+=ara[i];
        }
        int choto,boro;
        choto=boro=0;
        for(i=0; i<len-1; i++)
        {
            if(ara[i]<=ara[i+1])
            {
                continue;
            }
            else
            {
                boro=1;
                break;
            }
        }
        for(i=0; i<len-1; i++)
        {
            if(ara[i]>=ara[i+1])
            {
                continue;
            }
            else
            {
                choto=1;
                break;
            }
        }
        if((choto && boro)||(digit['B']>9 ||digit['U']>9 ||digit['S']>9 ||digit['P']>9 ||digit['F']>9 ||digit['T']>9 ||digit['M']>9))
            cout<<"error"<<endl;
        else
            cout<<nai<<endl;
    }
}
