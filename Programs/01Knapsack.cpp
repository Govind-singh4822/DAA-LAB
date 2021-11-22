// 0/1 Knapsack
#include<bits/stdc++.h>
using namespace std;

int knapsack(int wt[],int val[],int k,int n)
{
    if(n==0 || k==0)
        return 0;
    
    if(wt[n-1]>k)
       return knapsack(wt,val,k,n-1);
    
    else
        return max(knapsack(wt,val,k,n-1),val[n-1]+knapsack(wt,val,k-wt[n-1],n-1));
}

int main()
{
    int n;
    cin>>n;

    int wt[n],val[n];

    for(int i=0;i<n;i++)
    {
        cin>>wt[i];
    }

    for(int i=0;i<n;i++)
    {
        cin>>val[i];
    }

    int k;
    cin>>k;

    cout<<knapsack(wt,val,k,n)<<endl;

}
