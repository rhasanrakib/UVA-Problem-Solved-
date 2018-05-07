#include<bits/stdc++.h>
using namespace std;
vector<long long>suma;
vector<long long>sumb;
long long int lower(long long value,long long high)
{
    int c, low, middle,index;
    low = 0;

    while (low <= high)
    {
        middle = (low+high)/2;

        if (sumb[middle] == value)
        {
            index=middle;
            low=middle+1;
        }
        else if (sumb[middle] <value)
            low = middle + 1;
        else
            high = middle - 1;
    }
    return index;
}

long long int upper(long long value,long long high)
{
    int c, low, middle,index=-1;
    low = 0;
    while (low <= high)
    {
        middle = (low+high)/2;

        if (sumb[middle] == value)
        {
            index=middle;
            high=middle-1;
        }
        else if (sumb[middle] <value)
            low = middle + 1;
        else
            high = middle - 1;
    }
    return index;
}
int main()
{
    long long int i,j,k,l,n,kase,u;
    long long int A[4050],B[4050],C[4050],D[4050];
    scanf("%lld",&kase);
    while(kase--)
    {
        scanf("%lld",&n);
        for(i=0; i<n; i++)
        {
            scanf("%lld %lld %lld %lld",&A[i],&B[i],&C[i],&D[i]);
        }

        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                suma.push_back(A[i]+B[j]);
            }
        }

        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                sumb.push_back(C[i]+D[j]);
            }
        }
        sort(suma.begin(),suma.end());
        sort(sumb.begin(),sumb.end());
        int dis=0;
        int sz=suma.size();
        for(i=0; i<sz; i++)
        {
            u=upper(-1*suma[i],sz-1);
            l=lower(-1*suma[i],sz-1);
            /*cout<<"Upper : "<<u<<endl;
            cout<<"Lower : "<<l<<endl;*/
            if(u!=-1 && l!=-1)
            {
                dis+=(l-u)+1;
            }
        }
        cout<<dis<<endl;

        if(kase!=0)
        {
            cout<<endl;
        }
        suma.clear();
        sumb.clear();
    }
}
