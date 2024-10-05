//Breadth First Traversal-Queue
//Used to find the shortest path between two nodes
//Bfs level gives shortest path from the source vertex(shortest distance for equal weights)
#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> g[N];
//To put a number in a queue,visit once before putting them
int vis[N];
int level[N];

void bfs(int source){
    queue<int> q;
    q.push(source);
    vis[source]=1;
    while (!q.empty())
    {
        int cur_v=q.front();
        q.pop();
        cout<<cur_v<<" ";
        for (int child:g[cur_v])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child]=1;
                level[child]=level[cur_v]+1;
            }
        }
    }
}
//O(V+2E)=O(V+E)
int main(){
    int n;
    cin>>n;
    long long ans=0;
    for (int i = 0; i < n-1; i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    bfs(1);
    for (int i = 1; i <=n; i++)
    {
        cout<<i<<":"<<level[i]<<endl;
    }
}