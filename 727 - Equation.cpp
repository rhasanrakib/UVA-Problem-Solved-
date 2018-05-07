#include<bits/stdc++.h>
using namespace std;
int precedence(char ch)
{
    if(ch=='^')return 4;
    else if(ch=='*')return 3;
    else if(ch=='/')return 3;
    else if(ch=='+')return 2;
    else if(ch=='-')return 2;
    else return 0;
}
int main()
{
    /*freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);*/

    char ch;
    int test=0;
    int ok=0;

    cin>>test;
    cin.ignore();
    cin.ignore();

    while(test--)
    {
        ok++;
        if(ok>1)cout<<endl;

        string str;
        string ss="";
        int i,j,k,order;
        stack<char>stk;

        while(true)
        {
            getline(cin,str);
            if(!cin || str.length()==0)
            {break;}

                ch=str[0];
                if(ch=='(')
                    stk.push(ch);
                else if(ch==')')
                {
                    while(!stk.empty() && stk.top()!='(')
                    {
                        ss+=stk.top();
                        stk.pop();
                    }
                    if(!stk.empty()&& stk.top()=='(')
                        stk.pop();
                }
                else
                {
                    order=precedence(ch);
                    if(order==0)
                        ss+=ch;
                    else
                    {
                        if(stk.empty())
                            stk.push(ch);
                        else
                        {
                            while(!stk.empty()&& stk.top()!='(' && order<=precedence(stk.top()))
                            {
                                ss+=stk.top();
                                stk.pop();
                            }
                            stk.push(ch);
                        }
                    }
                }


        }
        while(!stk.empty())
        {
            ss+=stk.top();
            stk.pop();
        }
        cout<<ss<<endl;
        ss.clear();

    }
}
