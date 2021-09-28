	#include<bits/stdc++.h>	
	using namespace std;		
	int main()	
	{	
	        int n,i=0,j=0;
			cin>>n;
			int arr1[n];
			for(int i=0;i<n;i++)
			{
				cin>>arr1[i];
			}
			int m;
			cin>>m;
			int arr2[m];
			for(int i=0;i<m;i++)
			{
				cin>>arr2[i];
			}

			vector<int> v;

			while(i<n && j<m)
			{
				if(arr1[i]==arr2[j])
				{
					v.push_back(arr1[i]);
					i++;
					j++;
				}
				else if(arr1[i]<arr2[j])
				{
					i++;
				}
				else
				{
					j++;
				}
			}

			for(int i=0;i<v.size();i++)
			{
				if(v[i]!=v[i+1])
				{
					cout<<v[i]<<" ";
				}
				
			}
	}

/*
Find common elements
You have been given two sorted integer arrays of size m and n. 
Design an algorithm and implement it using a program to find 
list of elements which are common to both.
*/