#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int test,i,j,k;
    cin>>test;
    getchar();
    while(test--)
    {
        char str[300];
        stack<char>stk;
        gets(str);
        int len=strlen(str);
        if(strcmp(str,"\0")==0)
            cout<<"Yes"<<endl;
        else
        {
            for(i=0;i<len;i++)
            {
                if(str[i]=='(' || str[i]== '{' || str[i]=='[')
                    stk.push(str[i]);
                else
                {
                    if(stk.empty())
                        stk.push('A');
                    char ch = stk.top();
                    //cout<<ch<<str[i]<<endl;
                    if(str[i]==')' && ch=='(')
                    {
                        stk.pop();
                    }
                    else if(str[i]=='}' && ch=='{')
                    {
                        stk.pop();
                    }
                    else if(str[i]==']' && ch=='[')
                    {
                        stk.pop();
                    }
                    else
                        break;
                }
            }
            if(!stk.empty())
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
        }
    }
    return 0;
}
