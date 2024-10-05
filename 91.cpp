//Edge deletion questios using dfs
//Same for prime numbers,put 1 for prime and 0 for non prime 
#include <bits/stdc++.h>
using namespace std;
const int M=1e9+7;
const int N=1e5+10;
vector<int> g[N];
int subtree_sum[N];
int val[N];

void dfs(int vertex,int par=0){
    subtree_sum[vertex]+=val[vertex];
    for (int child:g[vertex])
    {
        if (child==par) continue;
        dfs(child,vertex);
        subtree_sum[vertex]+=subtree_sum[child];
    }
}

int main(){
    int n,value;
    cin>>n;
    long long ans=0;
    for (int i = 0; i < n-1; i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        cin>>val[i];
    }
    dfs(1);
    for (int i = 2; i <=n; i++)
    {
        int part1=subtree_sum[i];
        int part2=subtree_sum[1]-part1;
        ans=max(ans,(part1*1LL*part2)%M);
    }
    cout<<"---"<<ans<<endl;
}
/*Input:
4
1 2
1 4
4 3
10
5
12
6
*/