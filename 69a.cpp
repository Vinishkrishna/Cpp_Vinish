#include<bits/stdc++.h>
using namespace std;

//Question leetcode(Super Pow)

int binExp(int a,int b,int m){
    a%=m;
    int ans=1;
    while(b>0){
        if (b&1)
        {
            ans=(ans*1LL*a)%m;
        }
        a=(a*1LL*a)%m;
        b>>=1;
    }
    return ans; 
}

int superPow(int a,vector<int>&b){
        int bmod=0;
        for (int val:b)
        {
            bmod=(bmod*10+val)%1140;//1140 came by ETF,of a non-prime number
        }
        return binExp(a,bmod,1337);
}

int main(){
    int n,a;
    vector<int> c;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        c.push_back(a);
    }
    //[4,3,3,8,5,2]
    cout<<superPow(2147483647,c)<<endl;
}