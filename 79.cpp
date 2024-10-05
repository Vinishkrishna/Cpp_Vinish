//Buying cycle with piggybank money after going to god of money,after each day money is doubled
#include <bits/stdc++.h>
using namespace std;
//Answer:Number of set bits
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long x;
        cin>>x;
        cout<<__builtin_popcountll(x)<<endl;
    }
    return 0;
}