//Modular Multiplicative Inverse
#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;
//Fermet little theorem
//If A^(M-1) is divide by M,then remainder will be 1
//M is prime here
//and A is not a Multiple of M
//When M is non-prime by Extended Euclid Algorithm
//A^(M-2) gives inverse of A
int binexp(int a,int b,int m){
    int result=1;
    while (b>0)
    {
        if (b&1)
        {
            result=(result*1LL*a)%m;
        }
        a=(a*1LL*a)%m;
        b>>=1;
    }
    return result;
}
int main(){
    cout<<binexp(2,M-2,M);//Log(n) time 
    return 0;
}