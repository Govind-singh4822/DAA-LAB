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

        vector<int>v;
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                for(int k=n;k>=1;k--)
                {
                    if((arr[i]+arr[j])==arr[k])
                    {
                        v.push_back(i);
                        v.push_back(j);
                        v.push_back(k);

                    }
                    
                }
            }
        }
        
        if(v.size()>0)
        {
            cout<<v[0]<<","<<v[1]<<","<<v[2]<<endl;
        }
        else
            {
                cout<<"No sequence found"<<endl;
            }

    }
}
/*
3
Input-:  5
         1 5 84 209 341
Output-: No sequence found
Input-:  10
         24 28 48 71 86 89 92 120 194 201
Output-: 2,7,8 
Input-:  15
         64 69 82 95 99 107 113 141 171 350 369 400 511 590 666
Output-: 1,6,9
*/