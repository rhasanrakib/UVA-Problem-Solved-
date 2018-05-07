#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[300];
    char str[500],temp[500];
    int test,n,i,j,k;
    while(cin>>n)
    {
        if(n==0)break;
        for(i=0; i<n; i++)
        {
            cin>>k;
            ara[i]=k-1;
        }
        while(cin>>test)
        {
            getchar();
            if(test==0)break;
            gets(str);
            int len=strlen(str);
            if(len<n)
            {
                for(i=len; i<n+(n-len-1); i++)
                {
                    str[i]=' ';
                }
                str[i]='\0';
            }
            //printf("%s\n",str);
            while(test--)
            {
                for(i=0; i<n; i++)
                {
                    temp[ara[i]]=str[i];
                }
                temp[i]='\0';
                strcpy(str,temp);
            }
            printf("%s\n",str);
        }
        cout<<endl;
    }
}
