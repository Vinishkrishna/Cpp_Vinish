#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ct=0;
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            cout<<i<<endl;
            ct+=1;
            sum+=i;
        }
    }
    cout<<ct<<" "<<sum<<endl;
    //O(N)
    return 0;
}