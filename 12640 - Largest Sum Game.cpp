#include<bits/stdc++.h>
using namespace std;
long long arr[100000000];
int main()
{
    char ch;
    long long i,mxsum,total,n,j=0;
    while(scanf("%lld%c",&n,&ch)!=EOF)
    {
        mxsum=0;
        arr[j++]=n;
        if(ch!='\n')
        {
            while(1)
            {
                scanf("%lld%c",&n,&ch);
                arr[j++]=n;

                if(ch=='\n')
                {
                   // mxsum=0;
                    total=0;
                    for(i=0; i<j; i++)
                    {
                        total+=arr[i];
                        if(mxsum<total)
                        {
                            mxsum=total;
                        }
                        if(total<0)
                        {
                            total=0;
                        }
                    }
                    printf("%lld\n",mxsum);
                    j =0;
                    ch=' ';
                    break;
                }
            }
        }
        else
        {
            mxsum=max(mxsum,arr[0]);
            cout<<mxsum<<endl;
            j=0;
        }
    }
    return 0;
}

