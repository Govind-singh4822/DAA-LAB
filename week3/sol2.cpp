#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int temp,i,j,min;
    int count=0,scount=0;

    for(int i=0;i<n-1;i++)
    {
       min = i;
       for(int j=i+1;j<n;j++)
       {
           if(arr[j]<arr[min])
           {
               min = j;
           }
           count++;
       }
       swap(arr[min],arr[i]);
       scount++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\ncomperision = "<<count<<endl;
    cout<<"swap = "<<scount<<endl;
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
Input-: 3
        8
       -13 65 -21 76 46 89 45 12
       -21 -13 12 45 46 65 76 89 
Output - : comperision = 28
           swap = 7
        10
        54 65 34 76 78 97 46 32 51 21
        21 32 34 46 51 54 65 76 78 97 
           comperision = 45
           swap = 9
        15
        63 42 223 645 652 31 324 22 553 12 54 65 86 46 325
        12 22 31 42 46 54 63 65 86 223 324 325 553 645 652 
           comperision = 105
           swap = 14
*/