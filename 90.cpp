//Lowest common ancestor
#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> g[N];
int par[N];

void dfs(int v,int p=-1){
    par[v]=p;
    for (int child:g[v])
    {
        if (child==par)
        {
            continue;
        }
        dfs(child,v);
    }
}

vector<int> path(int v){
    vector<int> ans;
    while (v!=-1)
    {
        ans.push_back(v);
        v=par[v];
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n-1; i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1);
    int x,y;
    vector<int> path_x=path(x);
    vector<int> path_y=path(y);
    int mn_ln=min(path_x.size(),path_y.size());
    int lca=-1;
    for (int i = 0; i < mn_ln; i++)
    {
        if (path_x[i]==path_y[i])
        {
            lca=path_x[i];
        }
        else{
            break;
        }
    }
    cout<<lca<<endl;
}
/*
13
1 2
1 3
1 13
2 5
5 6
5 7
5 8
8 12
3 4
4 9
4 10
10 11
6 7
*/
/*
Another approach
Find depth of two nodes
Bring both nodes to same level
Then move one by one step up for both nodes,to find common node
same complexitity,but path vector need not be stored
Binary uplifting-log(n)*/