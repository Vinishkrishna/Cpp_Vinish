//0-1 BFS
//At any time only 2 levels exist in a Bfs
//If a 0 level node comes queue comes put it in front of the queue
//If a 1 level node comes queue comes put it in back of the queue
//Chef and Reversing Question
#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
const int INF=1e9+10;
vector<pair<int,int>> g[N];//weigthted graph representation
vector<int> lev(N,INF);
int n,m;//vertices,edges
//O(V+E)
int bfs(){
    deque<int> q;
    q.push_back(1);
    lev[1]=0;
    while (!q.empty())
    {
        int cur_v=q.front();
        q.pop_front();
        for (auto child:g[cur_v])
        {
            int child_v=child.first;
            int wt=child.second;
            //every node can be processd twice in bfs(0-1) in queue,level of a node can be set once(94.e)
            if (lev[cur_v]+wt<lev[child_v])
            {
                lev[child_v]=lev[cur_v]+wt;
                if (wt==1)
                {
                    q.push_back(child_v);
                }
                else{
                    q.push_front(child_v);
                }
            }
        }
    }
    return lev[n]==INF?-1:lev[n];
}

int main(){
    cin>>n>>m;
    for (int i = 0; i < m; i++)
    {
        int x,y;
        cin>>x>>y;
        if(x==y) continue;//self-loops not needed
        g[x].push_back({y,0});//given
        g[y].push_back({x,1});//by us
    }
    cout<<bfs()<<endl;
}
/*
7 7
1 2
3 2
3 4
7 4
6 2
5 6
7 5
Output:2
*/