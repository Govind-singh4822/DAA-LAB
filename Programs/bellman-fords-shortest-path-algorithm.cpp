#include<bits/stdc++.h>
using namespace std;
struct node{
	int n,m,wt;
	node(int node,int edge,int weight)
	{
		n=node;
		m=edge;
		wt=weight;
	}
};
int main()
{
	int N,v;
	cin>>N>>v;
	vector<node>edges;
	for(int i=0;i<v;i++){
		int n,m,wt;
		cin>>n>>m>>wt;
		edges.push_back(node(n,m,wt));
	}
	int src;
	cin>>src;
	int inf=10000000;
	vector<int> dist(N,inf);
	dist[src]=0;
	for(int i=1;i<=N-1;i++){
		for(auto it:edges){
			if(dist[it.n]+it.wt<dist[it.m])
			{
				dist[it.m]=dist[it.n]+it.wt;
			}
		}
	}
	int f1=0;
	for(auto it:edges)
	{
		if(dist[it.n]+it.wt<dist[it.m])
		{
			cout<<"Negative Cycle";
			f1=1;
			break;
		}
	}
	if(!f1)
	{
		for(int i=0;i<N;i++)
		{
			cout<<i<<" "<<dist[i]<<endl;
		}
	}
	return 0;
}

/*
Bellman-Ford's shortest path algorithm
Design an algorithm and implement it using a program to solve Dijkstra's algorithm problem using Bellman-Ford's shortest path algorithm.
Input Format:
Input will be the graph in the form of adjacency list.
No of nodes
No of edges
A weighted directed graph
A source vertex
Output Format:
Print "Negative Cycle" if it exists else print the distance array only.
Constraints:
1<=n<=10
1<=m<=10
1<=starting vetex<=10
1<=destination vertex<=10
1<=weight<=10
1<=source<=10
*/