#include<iostream>
using namespace std;

void solve(char arr[],int n)
{
    int freq[26] = {0};
    int mx = -1;
    char result;

    for(int i=0;i<n;i++)
    {
        freq[arr[i]-'a']++;
    }

    for(int i=0;i<26;i++)
    {
        if(mx<freq[i])
        {
            mx = freq[i];
            result = (char)(i+'a');
        }
    }

    if(mx<2)
    {
        cout<<"No duplicates present"<<endl;
    }
    else
    {
        cout<<result<<"-"<<mx<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    char arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    solve(arr,n);
    
    
}

/*
Maximum occurrence problem
Given an unsorted array of alphabets containing duplicate elements. 
Design an algorithm and implement it using a program to find which 
alphabet has maximum number of occurrence

Input -:  5       
          a d a c z 
          
Output -: a-2
*/