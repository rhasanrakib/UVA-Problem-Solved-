#include<bits/stdc++.h>
using namespace std;
bool kondi(char ch)
{
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		return true;
	return false;
}
int main()
{
	char ch,ka;
	int flag=0;
	int fl=0;
	while(scanf("%c",&ch))
	{
		if(kondi(ch)&& flag==0 && fl==0)
		{
			printf("%c",ch);
			flag=1;
		}
		if(kondi(ch)==false && flag==0 && fl==0)
		{
			ka=ch;
			fl=1;
		}
		if(!((ch>='a' && ch<='z')||(ch>='A' && ch <='Z')) || ch=='\n')
		{
			if(flag)
			{
				printf("ay%c",ch);
			}
			if(fl)
			{
				printf("%cay%c",ka,ch);
			}
			flag=0;
			fl=0;
		}
		else 
		{
			printf("%c",ch);
		}
	}
}