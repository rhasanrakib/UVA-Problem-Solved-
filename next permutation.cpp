#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int  n=1;
    cin>>s;
    while(next_permutation(s.begin(),s.end()))
    {
        if(n==119)
        {
            cout<<s;
            break;
        }
        n++;
    }
}
