
#include <bits/stdc++.h>
using namespace std;
int visited[100];
void dfs(int i,vector<int> adj[],int n)
{
    visited[i]=1;
    for(int j=0;j<adj[i].size();j++)
    {
        if(visited[adj[i][j]]==0)
        {
            dfs(adj[i][j],adj,n);
        }
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> adj[n];
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        for(int j=0;j<x;j++)
        {
            int y;
            cin>>y;
            adj[i].push_back(y);
        }
    }
    int s,d;
    cin>>s>>d;
    dfs(s,adj,n);
    if(visited[d]==1)
    {
        cout<<"present";
    }
    else
    {
        cout<<"not present";
    }
    return 0;   
}
// Time Complexity: O(V+E)
// Space Complexity: O(V)


