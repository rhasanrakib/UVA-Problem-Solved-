#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("out.txt","w",stdout);
    string ss,temp;
    int i,j,k,l,test,kase;
    cin>>test;
    getchar();
    getchar();
    for(kase=1; kase<=test; kase++)
    {
        printf("Case #%d:\n",kase);
        while(getline(cin,ss))
        {
            if(ss.length()==0)
            {
                //cout<<"paisi"<<endl;
                break;
            }
            stringstream s;
            s<<ss;
            j=0;
            while(s>>temp)
            {
                if(temp.length()>j)
                {
                    cout<<temp[j];
                    j++;
                }
            }
            cout<<endl;
        }
        if(kase!=test)cout<<endl;
    }
    return 0;
}
