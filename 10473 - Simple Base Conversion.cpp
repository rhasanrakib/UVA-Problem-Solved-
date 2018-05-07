#include<bits/stdc++.h>
using namespace std;
long long power (int b, int p)
{
    long long sum = 1;

    for ( int i = 1; i <= p; i++ )
        sum *= b;

    return sum;

}

long long  convert_deci (string s)
{
    long long sum = 0;
    int len = s.length ();
	int p=len-1;
	int val;
    for ( int i = 0; i < len; i++ )
	{	
		if(s[i]>='0' && s[i]<='9')
			val=s[i]-'0';
		else if(s[i]>='A' && s[i]<='F')
			val=(s[i]-'A')+10;
		sum+=(power(16,p)*val);
		p--;
	}
    return sum;
}
long long func(string s)
{
	int sum=0,len,rem=0;
	len=s.length();
	for(int i=0;i<len;i++)
	{
		sum=(sum*10)+(s[i]-'0');
	}
	return sum;
}
int main()
{
	string ss;
	while(cin>>ss)
	{
		if(ss[0]=='-' && ss[1=='1' && ss.length()==2])break;
		if(ss[0]=='0' && ss[1]=='x')
		{
			cout<<convert_deci(ss)<<endl;	
		}
		else
		{
			long long nn=func(ss);
			//cout<<nn<<endl;
			printf("0x%X\n",nn);
		}
	}
}