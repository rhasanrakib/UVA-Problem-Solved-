#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll a,b,c,d,e,f,g,h,i;
    ll arr_brown[3];
    ll arr_green[3];
    ll arr_clear[3];
    while(cin>>arr_brown[0]>>arr_green[0]>>arr_clear[0]>>arr_brown[1]>>arr_green[1]>>arr_clear[1]>>arr_brown[2]>>arr_green[2]>>arr_clear[2])
    {

        ll a = arr_brown[1]+arr_brown[2];
        ll b = arr_brown[0]+arr_brown[2];
        ll c = arr_brown[0]+arr_brown[1];

        arr_brown[0]=a;
        arr_brown[1]=b;
        arr_brown[2]=c;

        a = arr_green[1]+arr_green[2];
        b = arr_green[0]+arr_green[2];
        c = arr_green[0]+arr_green[1];

        arr_green[0]=a;
        arr_green[1]=b;
        arr_green[2]=c;

        a = arr_clear[1]+arr_clear[2];
        b = arr_clear[0]+arr_clear[2];
        c = arr_clear[0]+arr_clear[1];

        arr_clear[0]=a;
        arr_clear[1]=b;
        arr_clear[2]=c;



        ll moves=0;
        vector<ll>v;
        vector<string>ss;
        char bgc[] = {'B','G','C'};
        for(ll i=0; i<3; i++)
        {

            for(ll j=0; j<3; j++)
            {
                for(ll k=0; k<3; k++)
                {
                    if(i==j||i==k||j==k)
                        continue;

                    v.push_back(arr_brown[i]+arr_green[j]+arr_clear[k]);
                    char s[3];
                    s[i]='B';
                    s[j]='G';
                    s[k]='C';
                    string z="";
                    z+=s[0];
                    z+=s[1];
                    z+=s[2];
                    ss.push_back(z);

                }
            }
        }
        ll sz = v.size();
        ll mn= INT_MAX;
        string s="";
        int cnt=0;
        for(ll i=0; i<sz; i++)
        {
            if(v[i]<=mn)
            {
                if(v[i]<mn)
                {
                    mn=v[i];
                    s=ss[i];
                    cnt++;

                }
                else
                {
                    if(ss[i]<s)
                    {
                        s=ss[i];
                    }
                }
            }
        }

        cout<<s<<" "<<mn<<endl;
    }
    return 0;
}
