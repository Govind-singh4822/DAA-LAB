#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int>a,pair<int,int>b)
{
    return a.first>b.first;
}

int main()
{
    int profit;
    int dedline;

    vector<pair<int,int> >job;      // first = profit || secound = dedline;
    int n;
    cin>>n;                         // no of job 

    for(int i=0;i<n;i++)
    {
        cin>>profit<<dedline;
        job.push_back(make_pair(profit,dedline));
    }

    sort(job.begin(),job.end(),comp);

    int maxEnd=0;

    for(int i=0;i<n;i++)
    {
        if(job[i].second>maxEnd)
        {
            maxEnd=job[i].second;
        }
    }

    int fill[maxEnd];
    int count=0,maxProfit=0;

    for(int i=0;i<maxEnd;i++)
    {
        fill[i]=-1;
    }

    for(int i=0;i<n;i++)
    {
        int j = 
    }


}
 

/*

jobid   profit  dedline
a         100      2
b         19       1
c         27       2
d         25       1
e         15       3

sort profit

a   100  2
c   27   2
d   25   1
b   19   1
e   15   3

     0    1     2
     c      a    e
   0    1     2    3

   100+27+15=142

*/