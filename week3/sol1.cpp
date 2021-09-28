#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int n,temp,i,j;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   int count=0,scount=0;

   for(i=1;i<n;i++)
   {
       temp = arr[i];
       j=i-1;
       while(j>=0 && arr[j]>temp)
       {
           arr[j+1] = arr[j];
           j=j-1;
           scount++;
           count++;
       }
       scount++;
       arr[j+1] = temp;
   }

   for(i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
    cout<<"\nshift = "<<scount<<endl;
    cout<<"comperision = "<<count<<endl;
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
Input-:  3
         8
        -23 65 -31 76 46 89 45 32
        -31 -23 32 45 46 65 76 89 
Output- : shift = 20
          comperision = 13

         10
         54 65 34 76 78 97 46 32 51 21
         21 32 34 46 51 54 65 76 78 97 
          shift = 37
          comperision = 28
         15
         63 42 223 645 652 31 324 22 553 -12 54 65 86 46 325
        -12 22 31 42 46 54 63 65 86 223 324 325 553 645 652 
          shift = 68
          comperision = 54
*/