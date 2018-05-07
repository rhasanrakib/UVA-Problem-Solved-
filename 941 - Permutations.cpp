#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  test,rng,n;
    string s;
    cin>>test;
    getchar();
    while(test--)
    {
        cin>>s>>rng;
        getchar();
		sort(s.begin(),s.end());
        n=1;
        while(next_permutation(s.begin(),s.end()))
        {
            if(n==rng)
            {
                cout<<s<<endl;
                break;
            }
            n++;
        }
    }
    return 0;
}
