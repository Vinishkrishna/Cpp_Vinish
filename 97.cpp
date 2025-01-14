//Floyd Warshall Algorithm
//All node all source,shortest path
//Can handle negative weights
//Can't handle cycle negative weight
#include <bits/stdc++.h>
using namespace std;
const int N=1e3+10;
const int INF=1e9+10;

int dist[N][N];

int main(){
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if(i==j) dist[i][j]=0;
            else dist[i][j]=INF;
        }
    }
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < m; i++)
    {
        int x,y,wt;
        cin>>x>>y>>wt;
        dist[x][y]=wt;
    }
    for (int k = 1; k <=n; k++)
    {
        for (int i = 1; i <=n; i++)
        {
            for (int j = 1; j <=n; j++)
            {
                if(dist[i][k]!=INF && dist[k][j]!=INF)//To handle negativw weights
                dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
            }
        }
    }
    //O(N^3)
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            if (dist[i][j]==INF)
            {
                cout<<"I"<<" ";
            }
            else
            {
                cout<<dist[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}
/*
Input:
6 9
1 2 1
1 3 5
2 3 2
3 5 2
2 5 1
2 4 2
4 5 3
4 6 1
5 6 2
*/