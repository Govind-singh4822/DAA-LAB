#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;  // nodes and edges
    cin>>n>>m;
    vector<int> dist(n+1,INT_MAX);
    vector<vector<pair<int,int> > > graph(n+1);

    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});  // for directed remove this line.
        
    }
    int source;
    cin>>source;
    dist[source]=0;
    set<pair<int,int> >s;
    //{wt,vertex}
    s.insert({0,source});
    while(!s.empty())
    {
        auto x = *(s.begin()); // set smallest dist element
        s.erase(x);
        for(auto it : graph[x.second])
        {
            if(dist[it.first]>dist[x.second] + it.second)
            {
                s.erase({dist[it.first],it.first});
                dist[it.first] = dist[x.second]+it.second;
                s.insert({dist[it.first],it.first});
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(dist[i]<inf)
        {
            cout<<dist[i]<<" ";
        }
    }
}

/*
Dijkstra’s algorithm
After end term examination, Akshay wants to party with his friends. 
All his friends are living as paying guest and it has been decided to first gather at Akshay’s 
house and then move towards party location. The problem is that no one knows the exact address 
of his house in the city. Akshay as a computer science wizard knows how to apply his theory subjects 
in his real life and came up with an amazing idea to help his friends. He draws a graph by looking in 
to location of his house and his friends’ location (as a node in the graph) on a map. He wishes to find
out shortest distance from each of his friend’s location to his house and then whatsapp them these
distances so that they can reach his house in minimum time. Akshay has developed the program that 
implements Dijkstra’s algorithm but not sure about correctness of results. Can you also implement 
the same algorithm and verify the correctness of Akshay’s results? (Hint: Print distance from friends’ 
location to Akshay’s house)

Input Format:
Input will be the graph in the form of adjacency list.
No of nodes
No of edges
A weighted undirected graph
A source vertex
Output Format:
distance array 
Constraints:
1<=n<=10
1<=m<=10
1<=starting vetex<=10
1<=destination vertex<=10
1<=weight<=10
1<=source<=10
*/


