#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> &a,pair<int,int> &b)
{
	float a1=((float)a.first/a.second);
	float b1=((float)b.first/b.second);
	return a1>=b1;
}

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int> >a(n);
     
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first>>a[i].second;  // first =  value and secound = weight
    }

    int w;
    cin>>w;

    sort(a.begin(),a.end(),comp);

    int ans=0;

    for(int i=0;i<n;i++)
    {
        if(w>=a[i].second)
        {
            ans += a[i].first;
            w  -=a[i].second;
        }
        else
        {
            double vw = (double) a[i].first/a[i].second;
            ans+=vw*w;
            w=0;
            break;
        }
    }

    cout<<ans<<endl; 
}

/*

Input-:  21 7
         24 4
         12 6
         40 5
         30 6
         20
Output-: 109

Exp-:
sort

value           40  24  30  21  12
weight          5   4   6   7    6

value/weight    8   6   5   3    2

        capacity=20

maximum value = 40+24+30+3(5)=109



Fractional knapsack
Given a knapsack of maximum capacity w. N items are provided, each having its own value and weight. You have to Design an algorithm and implement it using a program to find the list of the selected items such that the final selected content has weight w and has maximum value. You can take fractions of items,i.e. the items can be broken into smaller pieces so that you have to carry only a fraction xi of item i, where 0 ≤ xi ≤ 1.
Input:
First input line will take number of items N which are provided.
From second line onwards pair of value and weights of N items will be taken
Last line of the input will take the maximum capacity w of knapsack
Output:
Output line will give maximum value that can be achieved
Constraints:
1 <= N <= 100
1<= value <= 100
1<= weight <= 100
1 <= w <= 10000

*/