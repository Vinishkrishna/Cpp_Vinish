#include<bits/stdc++.h>
using namespace std;
//is_prime
int main(){
    int n;
    cin>>n;
    bool is_prime=true;
    if (n==1)
    {
        cout<<0<<endl;
    }
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            is_prime=false;
            break;
        }
    }
    cout<<is_prime<<endl;
    //O(N)
    return 0;
}