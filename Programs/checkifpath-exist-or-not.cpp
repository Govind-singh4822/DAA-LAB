#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<vector<int>> graph(120);
	for (int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		graph[a].push_back(b);
	}
	int sc,des;
	cin>>sc>>des;
	queue<int> help;
	vector<bool> vis(120,0);
	vis[sc]=true;
	help.push(sc);
	while(help.size())
	{
		int fro=help.front();
		help.pop();
		if(fro==des)
		{
			cout<<"YES"<<endl;
			return 0;
		}
		for (int i:graph[fro])
		{
			if(!vis[i])
			{
				help.push(i);
				vis[i]=true;
			}
		}
	}
	cout<<"NO"<<endl;
	return 0;
}
/*
Check if path exist or not
Given a directed graph, design an algorithm and implement it using a program to find if a path exists between two given vertices or not. 
Input:
no of edges
Input will be the graph in the form of adjacency list
Source vertex number and destination vertex number is also provided as an input
Output:
Output will be "YES" if path exists, otherwise print "NO"
Constraints:
1 <= no of edges <= 100
The starting and ending vertices of an edge will be between 1 and 100
1 <= source vertex <= 100
1 <= destination vertex <= 100
*/