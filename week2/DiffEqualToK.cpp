#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int arr[n];

        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }

        int k,count=0;
        cin>>k;

       for(int i=1;i<=n;i++)
       {
           for(int j=n;j>=1;j--)
           {
               if((arr[i]-arr[j])==k || arr[j] - arr[i] == k)
               {
                   count++;
               }
           }
       }
       cout<<count<<endl;
        
    }
}
