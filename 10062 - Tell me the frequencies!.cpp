#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);*/
    char str[1000000];
    int ara[1001];
    int i,j,k,len,nai=0;
    int indx[500],fre[500];
    while(gets(str))
    {
        if(nai!=0)
            cout<<endl;
        nai=1;
        len=strlen(str);
        memset(ara,0,sizeof(ara));
        for(i=0; i<len; i++)
        {
            ara[str[i]]++;
        }
        int l=0;
        for(j=0; j<200; j++)
        {
            if(ara[j]!=0)
            {
                ///cout<<ara[j]<<endl;
                indx[l]=j;
                fre[l]=ara[j];
                //printf("%d %d\n",indx[l],fre[l]);
                l++;
            }
        }
        int temp;
        for(i=0; i<l; i++)
        {
            for(j=i+1; j<l; j++)
            {
                if(fre[i]==fre[j])
                {
                    if(indx[j]>indx[i])
                    {
                        swap(indx[i],indx[j]);
                    }
                }
                else if(fre[j]<fre[i])
                {
                    swap(fre[i],fre[j]);
                    swap(indx[i],indx[j]);
                }
            }
        }
        for(i=0; i<l; i++)
        {
            printf("%d %d\n",indx[i],fre[i]);
        }
    }
    return 0;
}
