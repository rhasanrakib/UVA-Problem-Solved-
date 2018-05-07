#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    /*freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);*/
    char str[1000000];
    char s[1000000];
    int i,j,k,l,len;
    while(gets(str))
    {
        //getchar();
        j=0;
        int flag=0;
        len=strlen(str);
        for(i=0; i<len; i++)
        {
            if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
            {
                s[j++]=str[i];
                if(i==len-1 && j>0)
                {
                    //flag=1;
                    s[j]='\0';
                    if(s[0]=='A'||s[0]=='a'||s[0]=='E'||s[0]=='e'||s[0]=='I'||s[0]=='i'||s[0]=='O'||s[0]=='o'||s[0]=='U'||s[0]=='u')
                    {
                        cout<<s<<"ay";
                        j=0;
                    }
                    else
                    {
                        char ch=s[0];
                        for(l=1; l<j; l++)
                            cout<<s[l];
                        cout<<ch<<"ay";
                        j=0;
                    }
                    s[0]='\0';
                }
            }
            else
            {
                s[j]='\0';
                if(s[0]=='\0')
                {
                    cout<<str[i];
                }
                else if(s[0]=='A'||s[0]=='a'||s[0]=='E'||s[0]=='e'||s[0]=='I'||s[0]=='i'||s[0]=='O'||s[0]=='o'||s[0]=='U'||s[0]=='u')
                {
                    cout<<s<<"ay"<<str[i];
                    j=0;
                }
                else if(s[0]!='A'||s[0]!='a'||s[0]!='E'||s[0]!='e'||s[0]!='I'||s[0]!='i'||s[0]!='O'||s[0]!='o'||s[0]!='U'||s[0]!='u')
                {
                    char ch=s[0];
                    for(l=1; l<j; l++)
                        cout<<s[l];
                    cout<<ch<<"ay"<<str[i];
                    j=0;
                }
                s[0]='\0';
            }
        }
        cout<<endl;
    }
    return 0;
}
