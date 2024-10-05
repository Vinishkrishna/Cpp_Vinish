//Coin-Change 2
#include <bits/stdc++.h>
using namespace std;
const int N=2510;
int dp[310][10010];
//the variable which are changing in recursion(states) put the same in dp
//It should be such that all 1 coin should be used continuously and then.If 2 is used then 1 should not be used after this.(to avoid repeatations of combinations)
//In dp,first apply brute force method and then optimize
int func(int ind,int amount,vector<int>& coins){
    if(amount==0) return 1;
    if(ind<0) return 0;//means we have finished all coins but amount hasn't become zero
    if(dp[ind][amount]!=-1) return dp[ind][amount];
    int ways=0;
    for (int coin_amount = 0; coin_amount <= amount; coin_amount+=coins[ind])//coin_amount is zero because that coin cannot be selected also
    {
        ways+=func(ind-1,amount-coin_amount,coins);
    }
    return dp[ind][amount]=ways;
}//This can be used in coin-change 1,with slight changes
//func(n,amount) says that if we use coins till nth index and make amount
int coinChange(vector<int>& coins,int amount){
    memset(dp,-1,sizeof(dp));
    return func(coins.size()-1,amount,coins);
}

int main(){
    vector<int> coins={1,2,5};
    cout<<coinChange(coins,5);
}
//Output:4