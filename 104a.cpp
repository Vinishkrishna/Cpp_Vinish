#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
//0 1 1 2 3 5 8
//func(n)--> nth fib number(1 state-1d dp)
int dp[N];
//Top-down approach
int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    if(dp[n]!=-1) return dp[n];//memoisation
    return dp[n]=fib(n-1)+fib(n-2);//stored value is returned
}

int main(){
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    //Botton-up approach
    dp[0]=0;
    dp[1]=1;
    for (int i = 2; i <=n; i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<fib(n);
}
//In DP,the things which we have already computed no need to compute it again
//memset works only for -1