 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int n;     // no of activity
     cin>>n;

     vector<pair<int,int> >activity;   // first = end_time || secound = startTime;

     int s,e;
     for(int i=0;i<n;i++)
     {
         cin>>s>>e;
         activity.push_back(make_pair(e,s));
     }

     sort(activity.begin(),activity.end());

     int count=0;
     int currentEnd=-1;

     for(int i=0;i<n;i++)
     {
         if(activity[i].second>currentEnd)
         {
             count++;;
             currentEnd = activity[i].first;
         }
     }
     cout<<count<<endl;

 }

 /*
 startTime  1  3   0   5   8   5   7
 endRime    2  4   6   7   9   9   9

            1 2 3 4 5 6 7 8 10

            1->2 , 3->4 , 5->7 , 8->9 

            max 4 activity


    7
    0 6
    1 2
    3 4
    5 7
    5 9
    8 9
    7 9

    4
*/