#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;
/*
b<=10^9
b<=10^18
*/
int binExp(int a,int b,int m){
    int ans=1;
    while(b){
        if(b&1){
            ans=(ans*1LL*a)%m;
        }
        a=(a*1LL*a)%m;
        b>>=1;
    }
    return ans;
}

int main(){
    //50^64^32%M
    cout<<binExp(50,binExp(64,32,M-1),M)<<endl;//M is prime number
}
