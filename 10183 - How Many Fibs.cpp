#include<bits/stdc++.h>
using namespace std;
char s1[100000],s2[100000],temp[100000];
char store[50009][10009];
char temp1[100000];
char a[1000],b[1000];
int compar(char s1[],char s2[])
{
    int len1=strlen(s1);
    int len2=strlen(s2);
    if(len1>len2)
    {
        return 1;
    }
    else if(len1<len2)
    {
        return -1;
    }
    else
    {
        for(int i=0;i<len1;i++)
        {
            if(s1[i]>s2[i])
            {
                return 1;
            }
            else if(s1[i]<s2[i])
            {
                return -1;
            }
        }
    }
    return 0;
}
void rev1()
{

    int j=0;
    for(int i=strlen(s1)-1; i>=0; i--)
    {
        temp1[j++]=s1[i];
    }
    temp1[j]='\0';
    strcpy(s1,temp1);
}
void rev2()
{
    int j=0;
    for(int i=strlen(s2)-1; i>=0; i--)
    {
        temp1[j++]=s2[i];
    }
    temp1[j]='\0';
    strcpy(s2,temp1);
}
void revt()
{
    int j=0;
    for(int i=strlen(temp)-1; i>=0; i--)
    {
        temp1[j++]=temp[i];
    }
    temp1[j]='\0';
    strcpy(temp,temp1);
}

void add()
{
    int i;
    int len1=strlen(s1);
    int len2=strlen(s2);
    rev1();
    rev2();
    if(len1>len2)
    {
        for(i=len2; i<=len1; i++)
        {
            s2[i]='0';
        }
        s2[i]='\0';
    }
    else if(len2>len1)
    {
        for(i=len1; i<=len2; i++)
        {
            s1[i]='0';
        }
        s1[i]='\0';
    }
    int nai=0;
    int hisab=0;
    len2=max(len1,len2);
    for(i=0; i<len2; i++)
    {
        hisab+=(s1[i]-'0')+(s2[i]-'0');
        if(hisab>9 && i<len2-1)
        {
            temp[nai++]=(hisab%10)+'0';
            hisab=(hisab/10);
        }
        else if(hisab>9 && i==len2-1)
        {
            temp[nai++]=(hisab%10)+'0';
            temp[nai++]=(hisab/10)+'0';
        }
        else
        {
            temp[nai++]=hisab+'0';
            hisab=0;
        }
    }
    temp[nai]='\0';
    revt();
    rev1();
    rev2();
    //cout<<temp<<endl;
}
void fibo()
{
    s1[0]='0';
    s2[0]='1';
    s1[1]='\0';
    s2[1]='\0';
    for(int i=2; i<5009; i++)
    {
        add();
        strcpy(s1,s2);
        strcpy(s2,temp);
        strcpy(store[i],temp);
    }
    store[0][0]='0';
    store[1][0]='1';
    //printf("The Fibonacci number for %d is %s\n",n+1,temp);
}
int main()
{
    //freopen("output.txt","w",stdout);
    fibo();
    int n;
    char k[1000];
    while(scanf("%s",a))
    {
        getchar();
        scanf("%s",b);
        getchar();
        //cout<<a << " "<<b<<endl;
        if(a[0]=='0' && b[0]=='0' && strlen(a)==1 && strlen(b)==1)
        {
            break;
        }
        int cnt=0;
        for(int i=2; i<5009; i++)
        {
            int ca=compar(store[i],a);
            int cb=compar(store[i],b);
            if(ca>=0 && cb<=0)
            {
                cnt++;
            }
            if(cb>0)
            {
                break;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
