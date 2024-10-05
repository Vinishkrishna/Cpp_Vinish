//Dp:Frog 2:Atcoder 1D DP
#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int k;
int h[N];
int dp[N];

int func(int i){
    if(i==0) return 0;
    if(dp[i]!=-1) return dp[i];
    int cost=INT_MAX;
    //way 1
    for(int j=1;j<=k;++j){
        if(i-j>=0)
        cost=min(cost,func(i-j)+abs(h[i]-h[i-j]));
    }
    return dp[i]=cost;
}
//O(n*k)//n function call , k size loop
int main(){
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n>>k;
    for (int i = 0; i < n; i++)
    {
        cin>>h[i];
    }
    cout<<func(n-1);
}
/*
5 3
10 30 40 50 20
*/