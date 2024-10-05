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
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            int gc = 0;
            for (int i = 1; i <= l - 1; ++i)
            {
                gc = __gcd(gc, a[i]);//built-in log(max(a,b)) is the time complexity
            }
            for (int i = r + 1; i <= n; ++i)
            {
                gc=__gcd(gc, a[i]);
            }
            cout<<gc<<endl;
        }
    }
    //log(N) complexity of __gcd is ignored ,to keep it simple actual complexity will have added factor of log(N)
    //O(T*(N+Q*(N)))=O(T*N+T*N*Q) 
    return 0;
}