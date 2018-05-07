#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,num1,num2,kase,len,i,j,k;
    char str1[1000],str2[1000];
    cin>>test;
    for(kase=1;kase<=test;kase++)
    {
        cin>>len>>str1>>str2;
        int mov=0;
        for(i=0;i<len;i++)
        {
            num1=str1[i]-'0';
            num2=str2[i]-'0';
            if(abs(num1-num2)>5)
            {
                mov+=10-(abs(num1-num2));
            }
            else
            {
                mov+=(abs(num1-num2));
            }
        }
        printf("Case %d: %d\n",kase,mov);
    }
    return 0;
}
