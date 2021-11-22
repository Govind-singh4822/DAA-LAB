#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    map<int,int>m;

    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }

    int res=0;

    for(int i=0;i<n;i++)
    {
        if(m[arr[i]]>n/2)
        {
            res = arr[i];
            break;
        }
    }
    cout<<res<<endl;
}