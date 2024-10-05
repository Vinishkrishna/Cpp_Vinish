//Dijistra's
//Single source ,multiple destination
//To process the least distance first,priority queue is used(optimised)
//If anything is taken out from a queue,it will not be processed untill the node is not visited
//multiset can be used in place of priority queue
//In this case sets can also be used
//Question:Network Delay Time(maximum time for the signal to reach all nodes)
#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
const int INF=1e9+10;

vector<pair<int,int>> g[N];//node,weight
int dist[N];
int dijkstra(int source,int n,vector<pair<int,int>> g[N]){
    vector<int> vis(N);
    vector<int> dist(N,INF);
    set<pair<int,int>> st;//weight,node
    st.insert({0,source});
    dist[source]=0;
    while (st.size()>0)
    {
        auto node=*st.begin();
        int v=node.second;
        int v_dist=node.first;
        st.erase(st.begin());
        if(vis[v]) continue;
        vis[v]=1;
        for (auto child:g[v])
        {
            int child_v=child.first;
            int wt=child.second;
            if (dist[v]+wt<dist[child_v])
            {
                dist[child_v]=dist[v]+wt;
                st.insert({dist[child_v],child_v});//log(V)
            }
        }
    }
    int ans=0;
    for (int i = 1; i <=n; i++)
    {
        if(dist[i]==INF) return -1;
        ans=max(ans,dist[i]);
    }
    return ans;
}

int networkDelayTime(vector<vector<int>>&times,int n,int k){
    vector<pair<int,int>> g[N];
    for (auto vec:times)
    {
        g[vec[0]].push_back({vec[1],vec[2]});//vec[0]-vec[1] edge,vec[2] is weight
    }
    return dijkstra(k,n,g);
}
//O(V+ELog(V))
//k source
int main(){
    int n,m;
    for (int i = 0; i < m; i++)
    {
        int x,y,wt;
        cin>>x>>y>>wt;
        g[x].push_back({y,wt});
    }
    int times=[[2,1,1],[2,3,1],[3,4,1]]
    //Output:2
    networkDelayTime(times,n,1)
}