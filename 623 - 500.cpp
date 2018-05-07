#include<bits/stdc++.h>
using namespace std;
char temp[100000],tempm[100000],tempn[100000];
char strore;

void rev(char nai1[])
{
    char nai[100000];
    int i,len,j=0;
    len=strlen(nai1);
    for(i=len-1 ; i>=0 ; i--)
    {
        nai[j++]=nai1[i];
    }
    nai[j]='\0';
    strcpy(nai1,nai);
}
void int_to_str(char s[],int n)
{
    int i=0,m;
    while(n!=0)
    {
        m=(n%10);
        s[i++]=m+'0';
        n=n/10;
    }
    s[i]='\0';
    rev(s);
}
void add(char s1[],char s2[])
{
    int i;
    int len1=strlen(s1);
    int len2=strlen(s2);
    rev(s1);
    rev(s2);
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
    rev(temp);
    strcpy(tempn,temp);
}

void multi(char s1[],char s2[])
{
    int i,j;
    rev(s1);
    rev(s2);
    int len1,len2;
    len1=strlen(s1);
    len2=strlen(s2);
    for(i=0; i<len1; i++)
    {
        int hisab=0;
        int nai=i;
        for(int k=0; k<nai; k++)
        {
            tempm[k]='0';
        }
        for(j=0; j<len2; j++)
        {
            hisab+=((s2[j]-'0')*(s1[i]-'0'));
            if(hisab>9 && j<len2-1)
            {
                tempm[nai++]=(hisab%10)+'0';
                hisab=(hisab/10);
            }
            else if(hisab>9 && j==len2-1)
            {
                tempm[nai++]=(hisab%10)+'0';
                tempm[nai++]=(hisab/10)+'0';
            }
            else
            {
                tempm[nai++]=hisab+'0';
                hisab=0;
            }
            //cout<<tempm[nai]<<endl;
        }
        tempm[nai]='\0';
        rev(tempm);
        if(j==0)
        {
            strcpy(tempn,tempm);
        }
        else
        {
            add(tempn,tempm);
        }
    }
    int flg = 0;
    for(i=0; i<strlen(tempn); i++)
    {
        if(tempn[i]=='0')
        {
            flg=i;
        }
        else
        {
            flg=i;
            break;
        }
    }
    char emni[10000];
    int kh=0;
    for(i=flg; i<strlen(tempn); i++)
    {
        emni[kh++]=tempn[i];
    }
    emni[kh]='\0';
    strcpy(tempn,emni);
    strcpy(s2,s1);

}
void factorial()
{
    char sa[100000],sb[100000];
    sb[0]='1';
    sb[1]='\0';
    for(int i=1; i<=5; i++)
    {
        int_to_str(sa,i);
        cout<<"sa= "<<sa<<" sb "<<sb<<endl;
        //cout<<sa<<endl;
        multi(sa,sb);
        //cout<<" after sa = "<<sa<<" sb = "<<sb<<endl;
    }
}
int main()
{
    char str1[10009],str2[10009];
    int n;
    while(cin>>n)
    {
        temp[0]='\0';
        tempm[0]='\0';
        tempn[0]='\0';
        factorial();
    }
    return 0;
}

