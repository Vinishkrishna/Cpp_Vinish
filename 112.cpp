#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
//func(i,j) i.e if first string is considered till i and second string is considered till j,then in than string what is the longest common subsequence
int dp[1005][1005];
int lcs(int i,int j,string &s1,string &s2){//T.C:10^3*10^3-O(N^2)
    if(i<0 || j<0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    //remove 1 char from s1
    int ans=lcs(i-1,j,s1,s2);
    //remove 1 char from s2
    ans=max(ans,lcs(i,j-1,s1,s2));
    //remove 1 char from s1 and s2
    ans=max(ans,lcs(i-1,j-1,s1,s2)+(s1[i]==s2[j]));
    return dp[i][j]=ans;
}

int longestCommonSubsequence(string text1,string text2){
    memset(dp,-1,sizeof(dp));
    return lcs(text1.size()-1,text2.size()-1,text1,text2);
}

int main(){
    string s1="abcde";
    string s2="ace";
    cout<<longestCommonSubsequence(s1,s2);
}//Output:3