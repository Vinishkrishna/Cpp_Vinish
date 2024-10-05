//Multi-Source BFS
//In a queue at any point of time two level of nodes exist
//We put all sources in the queue together and we tell that all are at same level.
//SNSOCIAL Codechef
//Take maximum value nodes and do multi-source bfs
#include <bits/stdc++.h>
using namespace std;
const int N=1e3+10;
const int INF=1e9+10;
int val[N][N];
int vis[N][N];
int lev[N][N];
int n,m;

vector<pair<int,int>> movements={
    {0,1},{0,-1},{1,0},{-1,0},{1,1},{1,-1},{-1,1},{-1,-1}
};

bool isValid(int i,int j){
    return (i>=0 && j>=0 && i<n && j<m);
}

int bfs(){
    int mx=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            mx=max(mx,val[i][j]);//find max value
        }
    }
    queue<pair<int,int>> q;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mx==val[i][j])
            {
                q.push({i,j});//multi-source bfs
                lev[i][j]=0;
                vis[i][j]=1;
            }
        }
    }
    int ans=0;
    while (!q.empty())
    {
        auto v=q.front();
        int v_x=v.first;
        int v_y=v.second;
        q.pop();
        for (auto movement:movements)
        {
            int child_x=movement.first+v_x;
            int child_y=movement.first+v_y;
            if (!isValid(child_x,child_y)) continue;
            if (vis[child_x][child_y]) continue;
            q.push({child_x,child_y});
            lev[child_x][child_y]=lev[v_x][v_y]+1;
            vis[child_x][child_y]=1;
            ans=max(ans,lev[child_x][child_y]);
        }
    }
    return ans;
}

void reset(){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            vis[i][j]=0;
            lev[i][j]=INF;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n>>m;
        reset();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>val[i][j];
            }
        }
        cout<<bfs()<<endl;
    }
}
/*
Input:
3
2 2
1 1
1 1
2 2
1 1
1 2
3 4
1 2 1 2
1 1 1 2
1 1 2 2
Ouput:
0
1
2
*/