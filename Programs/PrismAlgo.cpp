#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,int> > adj[n];

int u,v,wt;
for(int i=0;i<m;i++)
{
    cin>>u>>v>>wt;
    adj[u].push_back(make_pair(v,wt));
    adj[v].push_back(make_pair(u,wt));
}

int parent[n];
bool mstSet[n];
int key[n];
for(int i=0;i<n;i++){
    key[i]=INT_MAX;
    mstSet[i]=false;
}
priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int>> >pq;  // min heap take min ele in top
key[0]=0;
parent[0]=-1;
pq.push({0,0});

while(!pq.empty()){
    int temp=pq.top().second;       //thi will give min value from heap
    pq.pop();

    mstSet[temp]=true;

    for(auto it: adj[temp]){
        int temp2=it.first;         // node
        int weight=it.second;       // weight

        if(mstSet[temp2]==false and weight < key[temp2]){
            parent[temp2]=temp;
            key[temp2]=weight;
            pq.push({key[temp2],temp2});
        }
    }
}
int sum =0;
sort(key,key+n);
for(int i=0;i<n-1;i++){
    //cout<<key[i]<<" ";
    sum+=key[i];

}
cout<<sum<<endl;
}

/*
Prim's Algorithm
Assume that a project of road construction to connect some cities is given to your friend.
 Map of these cities and roads which will connect them (after construction) is provided 
 to him in the form of a graph. Certain amount of rupees is associated with construction 
 of each road. Your friend has to calculate the minimum budget required for this project. 
 The budget should be designed in such a way that the cost of connecting the cities should 
 be minimum and number of roads required to connect all the cities should be minimum (if there 
 are N cities then only N-1 roads need to be constructed). He asks you for help. Now, you 
 have to help your friend by designing an algorithm which will find minimum cost required 
 to connect these cities.
 

Input:
Input is in the form of adjacency list
No of nodes
No of edges
A weighted undirected graph
Output:
Minimum cost
Constraints:
1<=no of nodes<=10
1<=no of edges<=10
1<=starting vetex<=10
1<=destination vertex<=10
1<=weight<=10
*/