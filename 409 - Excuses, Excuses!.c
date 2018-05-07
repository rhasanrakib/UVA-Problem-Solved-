#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int i,j,k,l,m,n,o,p,e,cnt=0,mx=0,kase=0;
    int ara[500];
    char ex[100][100],key[100][100];
    char nai[100],temp[100];
    nai[0]='\0';
    temp[0]='\0';
    while(scanf("%d %d",&k,&e)==2)
    {
        getchar();
        memset(ara,0,sizeof(ara));
        for(i=0; i<k; i++)
        {
            scanf("%s",key[i]);
            getchar();
        }
        mx=0;
        for(m=0; m<e; m++)
        {
            gets(ex[m]);
            strcpy(nai,ex[m]);
            for(i=0; i<strlen(nai); i++)
            {
                if(nai[i]==' ')
                {
                    continue;
                }
                if(nai[i]>='A' && nai[i]<='Z')
                {
                    nai[i]=nai[i]+32;
                }
                if(nai[i]<'a' || nai[i]>'z')
                {
                    nai[i]=' ';
                }
            }
            p=0;
            cnt=0;
            for(i=0;i<=strlen(nai);i++)
            {
                if(nai[i]!=' ' && i!=strlen(nai))
                {
                    temp[p++]=nai[i];
                }
                else
                {
                    temp[p]='\0';
                    p=0;
                    for(j=0;j<k;j++)
                    {
                        if(strcmp(temp,key[j])==0)
                        {
                            cnt++;
                        }
                    }
                }
            }
            ara[m]=cnt;
            if(cnt>mx)
            {
                mx=cnt;
            }
        }
        printf("Excuse Set #%d\n",++kase);
        for(i=0;i<m;i++)
        {
            if(ara[i]==mx)
            {
                printf("%s\n",ex[i]);
            }
        }
        printf("\n");
    }
    return 0;
}

