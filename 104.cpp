#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
//0 1 1 2 3 5 8
//func(n)--> nth fib number
int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<fib(n);
}
//In DP,the things which we have already computed no need to compute it again
//memset works only for -1