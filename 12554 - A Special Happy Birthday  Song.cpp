#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ss[200];
    ss[0]="Happy";
    ss[1]="birthday";
    ss[2]="to";
    ss[3]="you";
    ss[4]="Happy";
    ss[5]="birthday";
    ss[6]="to";
    ss[7]="you";
    ss[8]="Happy";
    ss[9]="birthday";
    ss[10]="to";
    ss[11]="Rujia";
    ss[12]="Happy";
    ss[13]="birthday";
    ss[14]="to";
    ss[15]="you";
    string s1[109];
    int n,i,j,k,l,m;
    while(cin>>n)
    {
        for(i=0; i<n; i++)
        {
            cin>>s1[i];
        }
        j=0;
        k=0;
        for(i=0; i<n; i++)
        {
            cout<<s1[i]<<": "<<ss[j]<<endl;
            if(k>n-1 && j==15)
            {
                break;
            }
            if(i==n-1 && j!=15)
            {
                i=-1;
            }
           if(j==15)
           {
               j=-1;
           }
            j++;
            k++;
        }
    }
    return 0;
}
