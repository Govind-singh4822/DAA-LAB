#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;

    int count = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(abs(arr[i]-arr[j])==key)
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
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

/*
Input-: 2
        5
        1 51 84 21 31
        20

Output-:  2
******************************s
Input-:  10
         24 71 16 92 12 28 48 14 20 22
         4
Output-: 4
*/