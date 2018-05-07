#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s1[500];
    char s2[500];
    stack<string>stk;
    queue<string>qe;
    int a,b,c,d,i,j,k,l,n,t;
    cin>>n;
    getchar();
    string s3="";
    char ch[100];
    for(t=1; t<=n; t++)
    {
        gets(s1);
        gets(s2);
        int len=strlen(s1);
        int len2=strlen(s2);
		for(i=0;i<len;i++)
		{
			if(s1[i]=='<' || s1[i]=='>')
				continue;
			printf("%c",s1[i]);
		}
		printf("\n");
		for(i=0;i<len2;i++)
		{
			if(s2[i]!='.')
				printf("%c",s2[i]);
		}
        for(j=0; j<len; j++)
        {
            if(s1[j]=='<')
            {
                k=j+1;
                l=0;
                while(s1[k]!='>')
                {
                    ch[l++]=s1[k];
                    k++;
                }
                ch[l]='\0';
                s3+=ch;
                stk.push(s3);
                s3="";
            }
            if(s1[j]=='>')
            {
                k=j+1;
                l=0;
                while(s1[k]!='<')
                {
                    if(s1[k]=='\0')break;
                    ch[l++]=s1[k];
                    k++;
                }
                ch[l]='\0';
                s3+=ch;
                qe.push(s3);
                s3="";
            }
        }
        cout<<stk.top()<<qe.front();
		stk.pop();qe.pop();
		cout<<stk.top()<<qe.front();
		stk.pop();qe.pop();
		cout<<endl;
    }
    return 0;
}
