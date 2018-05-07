#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ss[50],temp;
    map<string,int>mp;
    int i,j,k,l,n,tk,thake,person,rem,kase=0,pabe;
    while(cin>>n)
    {
        getchar();
        for(i=0; i<n; i++)
        {
            cin>>temp;
            mp[temp]=0;
            ss[i]=temp;
        }
        for(i=0; i<n; i++)
        {
            cin>>temp>>tk>>person;
            if(person!=0)
                pabe=(tk)/(person);
            else
                pabe=0;
            rem=tk-(pabe*person);
            mp[temp]+=((-1)*tk+rem);
            while(person--)
            {
                cin>>temp;
                mp[temp]+=pabe;
            }
        }
        if(kase!=0)
            cout<<endl;
        kase=1;
        for(i=0; i<n; i++)
        {
            cout<<ss[i]<<" "<<mp[ss[i]]<<endl;
        }
        mp.clear();
    }
    return 0;
}
