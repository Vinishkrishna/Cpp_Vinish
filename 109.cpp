#include <bits/stdc++.h>
using namespace std;
//Knapsack Problem 0/1
const int N=2e5+10;
int wt[105],val[105];
long long dp[105][100005];
long long func(int ind,int wt_left){
    if(wt_left==0) return 0;
    if(ind<0) return 0;
    if(dp[ind][wt_left]!=-1) return dp[ind][wt_left];
    //Don't choose item at index
    long long ans=func(ind-1,wt_left);//not take
    //choose item at index
    if(wt_left-wt[ind]>=0)
    ans=max(ans,func(ind-1,wt_left-wt[ind])+val[ind]);
    return dp[ind][wt_left]=ans;
}
//T.C:10^2*10^5
int main(){
    memset(dp,-1,sizeof(dp));
    int n,w;
    cin>>n>>w;
    for (int i = 0; i < n; i++)
    {
        cin>>wt[i]>>val[i];
    }
    cout<<func(n-1,w);
}
/*
3 8
3 30
4 50
5 60
Output:90*/