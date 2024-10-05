//B.Greg and Graph(codeforces)
#include <bits/stdc++.h>
using namespace std;
const int N=510;
const int INF=1e9+10;
//Removing vertices from back
long long dist[N][N];

int main(){
    int n;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            cin>>dist[i][j];
        }
    }
    vector<int> del_order(n);
    for (int i = 0; i < n; i++)
    {
        cin>>del_order[i];
    }
    reverse(del_order.begin(),del_order.end());
    vector<long long> ans;
    for (int k = 0; k < n; k++)
    {
        int k_v=del_order[k];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j < =n; j++)
            {
                long long new_dist=dist[i][k_v]+dist[k_v][i];
                dist[i][j]=min(dist[i][j],new_dist);
            }
        }
        long long sum=0;
        for (int i = 0; i <=k; i++)
        {
            for (int j = 0; j <=k; j++)
            {
                sum+=dist[del_order[i]][del_order[j]];
            }
        }
        ans.push_back(sum);
    }
    reverse(ans.begin(),ans.end());
    for (auto val:ans)
    {
        cout<<val<<endl;
    }
}
/*
4
0 3 1 1
6 0 400 1
2 4 0 1
1 1 1 0
4 1 2 3
//Output:17,23,404,0
*/