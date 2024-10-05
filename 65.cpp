//Binary Exponentiation:Recursion Method
#include<bits/stdc++.h>
using namespace std;

int main(){
    //double d=1e24;//double can't store long values with precision
    // cout<<fixed<<setprecision(30)<<d;
    //pow(2,3) a,b ->a^b%m 
    for (int i = 0; i < b; i++)
    {
        ans*=a;
        ans%=M;
    }//O(n)
    return 0;
}