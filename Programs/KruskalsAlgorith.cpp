#include <bits/stdc++.h>
using namespace std;

struct node 
{
  int u;
  int v;
  int wt;
  
  node(int first, int second, int weight) 
  {
    u = first;
    v = second;
    wt = weight;
  }
};


bool comp(node a, node b) 
{ 
    return a.wt < b.wt; 
}


int findPar(int u, vector<int> &parent) 
{
  if (u == parent[u])
    return u;
    return parent[u] = findPar(parent[u], parent);
}


void unionn(int u, int v, vector<int> &parent, vector<int> &rank) 
{
  u = findPar(u, parent);
  v = findPar(v, parent);

  if (rank[u] < rank[v]) 
    {
      parent[u] = v;
    } 
  else if (rank[v] < rank[u]) 
    {
      parent[v] = u;
    } 
  else
     {
      parent[v] = u;
      rank[u]++;
     }
}


int main() 
{
  int n, m;
  cin >> n >> m;

  vector<node> edges;

  for (int i = 0; i < m; i++) 
  {
    int u, v, wt;
    cin >> u >> v >> wt;
    edges.push_back(node(u, v, wt));
  }


  sort(edges.begin(), edges.end(), comp);

  vector<int> parent(n);

  for (int i = 0; i < n; i++) 
  {
    parent[i] = i;
  }
  vector<int> rank(n, 0);
  int cost = 0;
  vector<pair<int, int>> mst;
  for (auto it : edges) 
  {
    if (findPar(it.v, parent) != findPar(it.u, parent)) 
    {
      cost += it.wt;
      mst.push_back({it.u, it.v});
      unionn(it.u, it.v, parent, rank);
    }
  }
  cout << cost << endl;

  return 0;
}
/*
Kruskal's Algorithm
Assume that a project of road construction to connect some cities 
is given to your friend. Map of these cities and roads which will connect 
them (after construction) is provided to him in the form of a graph. 
Certain amount of rupees is associated with construction of each road. 
Your friend has to calculate the minimum budget required for this project. 
The budget should be designed in such a way that the cost of connecting the cities 
should be minimum and number of roads required to connect all the cities should 
be minimum (if there are N cities then only N-1 roads need to be constructed). 
He asks you for help. Now, you have to help your friend by designing an algorithm 
which will find minimum cost required to connect these cities.
Input:
Input is in the form of adjacency list
No of nodes
No of edges
A weighted undirected graph
Output:
Minimum spanning weight
Constraints:
1<=no of nodes<=10
1<=no of edges<=10
1<=starting vetex<=10
1<=destination vertex<=10
1<=weight<=10
*/