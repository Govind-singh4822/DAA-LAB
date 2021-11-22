#include<bits/stdc++.h>
using namespace std;

bool iscycle(int src,vector<vector<int>> &adj,vector<bool> &visited,vector<int> &stack)
{
	stack[src] = true;
	if(!visited[src])
	{
		visited[src] = true;
		for(auto i : adj[src])
		{
			if(!visited[i] and iscycle(i,adj,visited,stack)){
				return true;
			}

			if(stack[i])
			{
				return true;
			}
		}
	}

	stack[src] = false;
	return false;
}


int main()
{
	int n,m; // n(vertices) , m(edges)
    cin>>n>>m;

    vector<vector<int>> adj(n);

    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>v>>v;
        adj[u].push_back(v);
    }

    bool cycle=false;
    vector<int> stack(n,0);
    vector<bool> visited(n,0);

    for(int i=0;i<n;i++)
    {
    	if(!visited[i] and iscycle(i,adj,visited,stack))
    	{
    		cycle = true;
    	}
    }

    if(cycle)
    {
        cout<<"cycle is present"<<endl;
    }
    else
    {
        cout<<"cycle is not present"<<endl;
    }
}

/*
4 3
0 1
1 2
2 1
cycle is not present

4 2
0 1
2 3
cycle is not present


Cycle detection
Given a directed graph, design an algorithm and implement it using a program to find whether cycle exists in the graph or not.
Input:
No of nodes
No of edges
Starting and ending vertex of an edge
Output:
Output will be "cycle exists" if cycle exists otherwise print "cycle doesn't exists"
Constraints:
1 <= nodes <= 100
1 <= edges <= 100
The starting and ending vertices of an edge will be between 1 and 100




#include<bits/stdc++.h>
using namespace std;
bool find_ans(vector<vector<int>> &graph,int node,vector<bool> &vis ,int par)
{
    vis[node]=1;
    for(int i:graph[node])
    {
        if(i!=par)
        {
            if (vis[i])
            return true;
            else{
                bool ans= find_ans(graph,i,vis,node);
                if(ans)
                return true;
            }
        }
    }
    vis[node]=0;
    return false;
}
int main()
{
    int n,e;
    cin>>n>>e;
    vector<vector<int>> graph(120);
    for(int i=0;i<e;i++)
    {
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
    }
    vector<bool>vis(120,0);
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0){
            bool ans=find_ans(graph,i,vis,-1);
            if (ans)
            {
                cout<<"cycle exists"<<endl;
                return 0;
            }
        }
    }
    cout<<"cycle doesn't exists"<<endl;
    return 0;
}
*/