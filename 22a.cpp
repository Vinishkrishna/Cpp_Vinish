//Optimised precomputation
#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
long long int ar[N];
int main()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int a,b,d;
        cin>>a>>b>>d;
        ar[a]+=d;
        ar[b+1]-=d;
    }
    for (int i = 1; i < N; i++)
    {
        ar[i]+=ar[i-1];
    }
    long long mx=-1;
    for (int i = 1; i <= n; i++)
    {
        if (mx<ar[i])
        {
            mx=ar[i];
        }
        
    }
    cout<<mx<<endl;
    // O(m+n)=2*10^5 + 10^7~10^7
    return 0;
}