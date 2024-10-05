#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ct=0;
    int sum=0;
    for (int i = 1; i*i <= n; i++)//or i<=sqrt(n)
    {
        if (n%i==0)
        {
            cout<<i<<" "<<n/i<<endl;
            ct+=1;
            sum+=i;
            if (n/i!=i)
            {
                sum+=n/i;
                ct+=1;
            }
        }
    }
    cout<<ct<<" "<<sum<<endl;
    //O(sqrt(N))
    //But queries are in range 10^6,then it is not optimised method
    return 0;
}