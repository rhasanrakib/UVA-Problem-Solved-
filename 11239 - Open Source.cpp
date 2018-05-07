#include<bits/stdc++.h>
using namespace std;

int main()
{

    while(1)
    {
        map<string,int >pro;
        map<string,int >nam;
        map<string,int >::iterator it;
        map<string,int >::iterator itr;
        map<string,int>asi;
        map<int,vector<string> >prnt;
        map<int,vector<string> >::reverse_iterator itp;
        string project,name,temp;
        vector <string> v;
        int flag=0;
        int num=0;
        while(getline(cin,temp))
        {
            if(temp[0]=='0' && temp.length()==1)
            {
                flag=1;
                break;
            }
            else if(temp[0]=='1' && temp.length()==1)
            {
                for(it=nam.begin(); it!=nam.end(); it++)
                {
                    if(it->second!=1)
                    {
                        name=it->first;
                        nam.erase(name);
                        asi.erase(name);
                    }
                }
                for(it=pro.begin(); it!=pro.end(); it++)
                {
                    int cnt=0;
                    int nai=it->second;
                    for(itr=asi.begin(); itr!=asi.end(); itr++)
                    {
                        if(itr->second==nai)
                        {
                            cnt++;
                        }

                    }
                    prnt[cnt].push_back(it->first);
                }

                for( itp=prnt.rbegin(); itp != prnt.rend() ; itp++)
                {
                    v=itp->second;
                    sort(v.begin(),v.end());
                    for(int nm=0; nm<v.size(); nm++)
                        cout<<v[nm]<<" "<<itp->first<<endl;
                }
                break;
            }
            else if(temp[0]>='A' && temp[0]<='Z')
            {
                if(pro[temp]==0)
                    num++;
                pro[temp]=num;
            }
            else
            {

                nam[temp]++;
                if(asi[temp]==num)
                {
                    if(nam[temp]>0)
                        nam[temp]--;
                }
                asi[temp]=num;
            }
        }
        if(flag)
            break;
    }
}
