#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int a[n + 10];
        int forward[n + 10];
        int backward[n + 10];
        forward[0]=backward[n+1]=0;//gcd of any number with zero is the number.
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            forward[i]=__gcd(forward[i-1],a[i]);
        }
        for (int i = n; i >=1; i--)
        {
            backward[i]=__gcd(backward[i+1],a[i]);
        }
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            int gc = 0;
            cout<<__gcd(forward[l-1],backward[r+1])<<endl;
        }
    }
    //log(N) complexity of __gcd is ignored ,to keep it simple actual complexity will have added factor of log(N)
    //O(T*(N+Q))=O(T*N+T*Q) 
    //as N=Q->O(T*(N+N))=10^6(given)
    return 0;
}