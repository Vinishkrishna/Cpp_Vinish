#include <bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int graph1[N][N];
vector<int> graph2[N];
//vector of 0 will tell 0 is connected to which vertex
//Weighted undirected graph
int main(){
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < m; i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        graph1[v1][v2]=wt;
        graph1[v2][v1]=wt;
        graph2[v1].push_back({v2,wt});
        graph2[v2].push_back({v1,wt});
    }
}
/*
Adjacency matrix
O(N^2)-Space complexity
N=10^5 not possible/N<=10^3
Adjacency List
O(N+M)
N-10^5 is possible

For adjacency List
i,j connected ? i,j >wt ? O(1)
For adjacency list O(N)
*/
if(graph1[i][j]==1){
    //connected
}
graph[i][j]//wt
for (pair<int,int> child:graph2)
{
    if (child.first==j)
    {
        //connected
        child.second
    }
}
//VisuAlgo->For understanding