#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> g[N];
bool vis[N];
//before means dfs call has not happened for it.
//after means dfs call has happened for it.
//enter means dfs is just entered
//exit means dfs is going to exit
void dfs(int vertex){
    /*Take action on vertex after entering the vertex*/
    //if(vis[child]) return; can be written in place of if(vis[child]) continue;
    cout<<vertex<<endl;
    vis[vertex]=true;
    for(int child:g[vertex]){
        cout<<"par"<<vertex<<",child"<<endl;
        if(vis[child]) continue;
        /*Take action on child before entering the child node*/
        dfs(child);
        /*Take action on child after exiting child node*/
    }
    /*Take action on vertex before exiting the vertex*/
}
//O(V+E)i.eO(V+2*E) for undirected
int main(){
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < 9; i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
} 
/*Input
6 9
1 3
1 5
5 3
5 6
3 4
4 6
3 6
3 2
2 6*/