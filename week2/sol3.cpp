#include<bits/stdc++.h>
using namespace std;

int count(int arr[],int n,int k)
{
    int high = 0;
    int low = 0;
    int count = 0;

    sort(arr,arr+n);

    while(high<n)
    {
        if(arr[high]-arr[low]==k)
        {
            low++; high++;
            count++;
        }

        else if(arr[high]-arr[low]>k)
        {
            low++;
        }
        else
        {
            high++;
        }
    }
    return count;
}


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int arr[n],k;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        cin>>k;

        int res = count(arr,n,k);
        cout<<res<<endl;
    }
}
