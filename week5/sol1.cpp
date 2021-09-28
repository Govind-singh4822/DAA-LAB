#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    char ch[n];
    for(int i=0;i<n;i++)
    {
        cin>>ch[i];
    }

    int count = 0;

    for(char i='a';i<='z';i++)
    {
        for(int j=0;j<n;i++)
        {
            if(i==ch[j])
            {
                count++;
            }
        }
        if(count!=0)
        {
            cout<<i<<" = "<<count<<endl;
            count=0;
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}