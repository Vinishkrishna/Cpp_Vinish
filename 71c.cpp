#include<bits/stdc++.h>
using namespace std;
//Prime factorization divide the number by its first prime number which divides the number,then divide it by another until at last we get 1.
//If a number is non-prime then there exit a prime number which divide the number present under sqrt of n.
int main(){
    int n;
    cin>>n;
    vector<int> prime_factors;
    for (int i = 2; i <= n; i++)
    {
        while (n%i==0)
        {
            prime_factors.push_back(i);
            n/=i;
        }
    }
    //O(N)
    for (int prime:prime_factors)
    {
        cout<<prime<" ";
    }
    return 0;
}