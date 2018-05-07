#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[600][600];
    int w,h,n,x1,x2,y1,y2,i,j,k,l,X1,X2,Y1,Y2;
    while(scanf("%d %d %d",&w,&h,&n)==3)
    {
        if(w==0&&h==0&&n==0)
        {
            break;
        }
        memset(ara,0,sizeof(ara));
        for(l=1;l<=n;l++)
        {
            scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
            if(x1>x2)
            {
                swap(x1,x2);
            }
            if(y1>y2)
            {
                swap(y1,y2);
            }
            for(i=x1;i<=x2;i++)
            {
                for(j=y1;j<=y2;j++)
                {
                    ara[i][j]=1;
                }
            }
        }
        int cnt=0;
        for(i=1;i<=w;i++)
        {
            for(j=1;j<=h;j++)
            {
                if(ara[i][j]==0)
                {
                    cnt++;
                }
            }
        }
        if(cnt==0)
        {
            cout<<"There is no empty spots."<<endl;
        }
        else if(cnt==1)
        {
            cout<<"There is one empty spot."<<endl;
        }
        else
        {
            printf("There are %d empty spots.\n",cnt);
        }
    }
    return 0;
}
