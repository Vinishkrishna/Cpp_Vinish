#include <bits/stdc++.h>
using namespace std;
const int N=2e5+10;
//In this question,because of constrains taken into account,it is solved in this manner(109c.png)
int wt[105],val[105];
long long dp[105][100005];
long long func(int ind,int value_left){//returns minimum weight for this index,for value of value_left
    if(value_left==0) return 0;
    if(ind<0) return 1e15;
    if(dp[ind][value_left]!=-1) return dp[ind][value_left];
    //Don't choose
    long long ans=func(ind-1,value_left);
    //Choose
    if(value_left-val[ind]>=0)
    ans=min(ans,func(ind-1,value_left-val[ind])+wt[ind]);
    return dp[ind][value_left]=ans;
}
//Knapsack Problem 2
//To make value v,what is the minimum weight required(opposite to what asked in the question)
//select n times to make sum is equal to value,and this should be done in minimum weight possible
//approach -> from 1 to 10^5,all values,calculate minimum weight
//then go from 10^5 to 1,then select that maximum value where weight value is less than given weight
int main(){
    memset(dp,-1,sizeof(dp));
    int n,w;
    cin>>n>>w;
    for (int i = 0; i < n; i++)
    {
        cin>>wt[i]>>val[i];
    }
    int max_value=1e5;
    for (int i = max_value; i >= 0; --i)
    {
        if(func(n-1,i)<=w){
            cout<<i<<endl;
            break;
        }
    }
}
/*
3 8
3 30
4 50
5 60
*/