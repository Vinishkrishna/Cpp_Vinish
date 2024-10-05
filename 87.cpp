/*How to DFS in a TREE->Height and Depth of a Tree*/
//Depth-when you enter a node from top,before you enter the node below or after you enter it.
//Height will come from bottom to up
//In trees visited array is not necessay,even though it may work
//For Trees
#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> g[N];
int depth[N],height[N];

void dfs(int vertex,int par=0){//default value
    for(int child:g[vertex]){
        if(child==par) continue;
        depth[child]=depth[vertex]+1;
        dfs(child,vertex);
        height[vertex]=max(height[vertex],height[child]+1);
    }
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
    for (int i = 1; i <=n; i++)
    {
        cout<<depth[i]<<" "<<height[i]<<endl;
    }
}
/*Input
13
1 2
1 3
1 13
2 5
3 4
5 6
5 7
5 8
8 12
4 9
4 10
10 11
*/