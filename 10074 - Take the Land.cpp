#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ara[200][200];
    int csum[200][200];
    int linear[200];
    memset(ara,0,sizeof(ara));
    memset(csum,0,sizeof(csum));
    memset(linear,0,sizeof(linear));
    int row,col,i,j,x,k=0,temp,nai;
    while(cin>>row>>col)
    {
        if(row==0 &&col==0)
            break;
        for(i=1; i<=row; i++)
        {
            for(j=1; j<=col; j++)
            {
                cin>>temp;
                if(temp==0)
                {
                    ara[i][j]=1;
                }
                else
                {
                    ara[i][j]=-99999;
                }
            }
        }

        for(j=1; j<=col; j++)
        {
            for(i=1; i<=row; i++)
            {
                csum[i][j]=csum[i-1][j]+ara[i][j];
            }
        }
        /* for(i=1; i<=row; i++)
          {
              for(j=1; j<=col; j++)
              {
                  cout<<csum[i][j]<<" ";
              }
              cout<<endl;
          }
              cout<<endl;*/

        int nd=0,mx=0;
        for(i=1; i<=row; i++)
        {
            for(j=i; j<=row; j++)
            {
                for(k=1; k<=col; k++)
                {
                    linear[k]=csum[j][k]-csum[i-1][k];
                }
                int sum=0;
                for(x=1; x<=col; x++)
                {
                    sum+=linear[x];
                    if(sum<0)
                    {
                        sum=0;
                    }
                    mx=max(sum,mx);
                    ///cout<<sum<<" ";
                }
                nd=max(nd,mx);
                ///cout<<endl;
            }
            ///cout<<endl;
        }
        cout<<nd<<endl;
    }
}

