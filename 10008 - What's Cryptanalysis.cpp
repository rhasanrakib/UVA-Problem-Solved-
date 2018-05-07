#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[100000];
    int i,k,j,l,n,len;
    int ara[101],fre[100],indx[100];
    while(cin>>n)
    {
        getchar();
        memset(ara,0,sizeof(ara));
        while(n--)
        {
            gets(str);
            len=strlen(str);
            for(i=0; i<len; i++)
            {
                if(str[i]>='A' && str[i]<='Z')
                {
                    ara[str[i]]++;
                }
                else if(str[i]>='a' && str[i]<='z')
                {
                    ara[str[i]-32]++;
                }
            }
        }
        j=0;
        for(i=64; i<92; i++)
        {
            if(ara[i]!=0)
            {
                fre[j]=ara[i];
                indx[j]=i;
                j++;
            }
        }
        l=j;
        for(i=0; i<l; i++)
        {
            for(j=i+1; j<l; j++)
            {
                if(fre[i]==fre[j])
                {
                    if(indx[i]>indx[j])
                    {
                        swap(indx[i],indx[j]);
                    }
                }
                else if(fre[i]<fre[j])
                {
                    swap(fre[i],fre[j]);
                    swap(indx[i],indx[j]);
                }
            }
        }
        for(i=0; i<l; i++)
        {
            printf("%c %d\n",indx[i],fre[i]);
        }
    }
}
