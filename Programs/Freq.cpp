#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    char s[n];

    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }

    map<char,int>m;
    map<char,int>::iterator it;

    for(int i=0;i<n;i++)
    {
        m[s[i]]++;
    }

    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<"-"<<it->second<<endl;
    }


}