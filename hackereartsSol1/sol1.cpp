#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void solve(int arr[],int n)
{
    int s=0;
    int e=n-1;
    sort(arr,arr+n);
    int found_pair=0,sum;
    cin>>sum;
    for(int i=0;i<n;i++)
    {
        if(arr[s]+arr[e]>sum)
        {
            e--;
        }
        else if(arr[s]+arr[e]<sum)
        {
            s++;
        }
        else
        {
            found_pair=1;
            break;
        }
    }

    if(found_pair==1)
    {
        cout<<arr[s]<<" "<<arr[e]<<endl;
    }
    else
    {
        cout<<"No Such Element Exist";
    }

}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    solve(arr,n);

}

/*
Find pair
    Given an unsorted array of integers, design an algorithm and 
    implement it using a program to find whether two elements 
    exist such that their sum is equal to the given key eleme...

Input -:  8
          1 2 3 4 5 6 7 8
          5
Output -: 1 4

Input -:  6
          12 34 65 1 54 78
          54
 Output-: 34 12


*/

/*
        else
        {
            found_pair=1;
            cout<<arr[s]<<" "<<arr[e]<<endl;
            e--;
            s++;
        }

Input -:  8
          1 2 3 4 5 6 7 8
          5

Output -: 1 4
          2 3
          3 2
          4 1
*/


