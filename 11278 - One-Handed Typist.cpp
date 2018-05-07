#include<bits/stdc++.h>
using namespace std;
int main()
{
	char dvo[] = "`123qjlmfp/[]456.orsuyb;=\\789aehtdck-0zx,inwvg' ~!@#QJLMFP?{}$%^>ORSUYB:+|&*(AEHTDCK_)ZX<INWVG\"";
	char keyboard[]="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./ ~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";
	char indx[200];
	int i,j,k,l;
	char inp[500];
	for(i=0;i<strlen(keyboard);i++)
	{
		indx[keyboard[i]]=dvo[i];
	}
	for(i=0;i<strlen(keyboard);i++)
		printf("i=%d %d %c\n",i,indx[keyboard[i]],dvo[i]);
	while(gets(inp))
	{
		int len=strlen(inp);
		int keylen=strlen(dvo);
		for(i=0;i<len;i++)
		{
			printf("%c",indx[inp[i]]);
			
		}
		cout<<endl;
	}
}