#include<bits/stdc++.h>
using namespace std;

int f91(int n)
{
    if(n<=100)
    {
        cout<<"n<=100 = "<<n<<endl;
        return f91(f91(n+11));
    }
    if(n>=101)
    {
        cout<<"n>=101 = "<<n<<endl;
        return n-10;
    }
}
int main()
{
    int n;
    while(cin>>n)
    cout<<f91(n)<<endl;
}
