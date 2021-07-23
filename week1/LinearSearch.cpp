#include<bits/stdc++.h>
using namespace std;

double linearSearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int t;
    cin>>t;
     while(t--)
     {
         int n;
         cin>>n;

         int arr[n];
         for(int i=0;i<n;i++)
         {
             cin>>arr[i];
         }

         int key;
         cin>>key;

         double ans = linearSearch(arr,n,key);

         if(ans==-1)
         {
             cout<<"NOT PRESENT"<<" "<<n<<endl;
         }
         else
         {
             cout<<"PRESENT"<<" "<<(ans+1)<<endl;
         }
     }

}

//Time complexity -: log(n)
