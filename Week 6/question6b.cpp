
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> adj(n);
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        for(int j=0;j<m;j++)
        {
            int x;
            cin>>x;
            adj[i].push_back(x);
        }
    }
    vector<int> color(n,0);
    for(int i=0;i<n;i++)
    {
        if(color[i]==0)
        {
            color[i]=1;
            queue<int> q;
            q.push(i);
            while(!q.empty())
            {
                int x=q.front();
                q.pop();
                for(int j=0;j<adj[x].size();j++)
                {
                    if(color[adj[x][j]]==0)
                    {
                        color[adj[x][j]]=color[x]==1?2:1;
                        q.push(adj[x][j]);
                    }
                    else if(color[adj[x][j]]==color[x])
                    {
                        cout<<"Not Bipartite"<<endl;
                        return 0;
                    }
                }
            }
        }   
    }
    cout<<"Bipartite"<<endl;
    return 0;
}

// time complexity: O(V+E)
// space complexity: O(V)