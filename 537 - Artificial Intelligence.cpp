#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);*/
    char str[100000],ss[100],s[100],temp[100];
    int test,i,j,k,l,len,kase;
    char ch;
    double P,U,I,a,b;
    cin>>test;
    getchar();
    for(kase=1; kase<=test; kase++)
    {
        gets(str);
        len=strlen(str);
        int ok=1;
        for(i=0; i<len-1; i++)
        {
            if((str[i]=='P' && str[i+1]=='=')||(str[i]=='I' && str[i+1]=='=')||(str[i]=='U' && str[i+1]=='='))
            {
                k=i;
                j=0;
                while(str[k]!=' ')
                {
                    temp[j++]=str[k++];
                }
                temp[j]='\0';
                if(ok)
                {
                    strcpy(ss,temp);
                }
                else
                {
                    strcpy(s,temp);
                }
                i+=j;
                ok=0;
            }
        }
        printf("Problem #%d\n",kase);
        int len1,len2;
        len1=strlen(ss);
        len2=strlen(s);
        if(ss[len-1]<'A' || ss[len-1] > 'Z')
        {
            ss[len-1]='\0';
        }
        if(s[len-1]<'A' || s[len-1] > 'Z')
        {
            s[len-1]='\0';
        }
        len1=strlen(ss);
        len2=strlen(s);
        sscanf(ss,"%c%c%lf%c",&ch,&ch,&a,&ch);
        if(ch=='m') a=a/1000.00;
        else if(ch=='k') a=a*1000.00;
        else if(ch=='M') a=a*1000000.00;
        sscanf(s,"%c%c%lf%c",&ch,&ch,&b,&ch);
        if(ch=='m') b=b/1000.00;
        else if(ch=='k') b=b*1000.00;
        else if(ch=='M') b=b*1000000.00;
        if((ss[0]=='U' && s[0]=='I')||(ss[0]=='I' && s[0]=='U'))
        {
            U=a;
            I=b;
            P=U*I;
            if(P>1.00)
                printf("P=%.2lfW\n",P);
            else
                printf("P=%0.2lfW\n",P);
        }
        else if((ss[0]=='P' && s[0]=='I')||(ss[0]=='I' && s[0]=='P'))
        {
            if(ss[0]=='P')
            {
                P=a;
                I=b;
            }
            else
            {
                I=a;
                P=b;
            }
            U=(P/I);
            if(U>1.00)
                printf("U=%.2lfV\n",U);
            else
                printf("U=%0.2lfV\n",U);
        }
        else
        {
            if(ss[0]=='P')
            {
                P=a;
                U=b;
            }
            else
            {
                U=a;
                P=b;
            }
            I=(P/U);
            if(I>1.00)
                printf("I=%.2lfA\n",I);
            else
                printf("I=%0.2lfA\n",I);
        }
        //if(kase!=test)
            cout<<endl;
    }
}
