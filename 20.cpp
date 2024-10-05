/*
Given array a of N integers. Given Q queries
and in each query given L and R print sum of
array elements from index L to R(L, R included)
Constraints
1 <= N <= 10^5
1 <= a[i] <= 10^9
1 <= Q <= 10^5
1 <= L, R <= N
*/
// Whenever L-R is given use 1-D array as it is easy,and whenever predix sum is given try to use 1 based array,not 0 for easy use.
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        long long sum = 0;
        for (int i = l; i <= r; ++i)
        {
            sum += a[i];
        }
        cout << sum << endl;
    }
    //O(N)+O(Q*N)=10^10
}