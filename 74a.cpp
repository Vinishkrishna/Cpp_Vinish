#include <bits/stdc++.h>
using namespace std;
/*There are N children and K toffees.K<N
Count the number of ways to distribute toffee
among N students such that each students get
1 toffee only --> nCk%M,M=10^9+7
N<10^6,K<N<10^6
Q<10^5
//n!/((n-r)!*r!)
*/
const int M = 1e9 + 7; // Modulus value
const int N = 1e6 + 10; // Maximum factorial index
int fact[N]; // Array to store factorials modulo M

// Function to perform modular exponentiation
int binexp(int a, int b, int m) {
    int result = 1;
    while (b > 0) {
        if (b & 1) {
            result = (result * 1LL * a) % m; // Taking modulo at each step
        }
        a = (a * 1LL * a) % m; // Square the base and take modulo
        b >>= 1;
    }
    return result;
}

int main() {
    fact[0] = 1; // 0! = 1
    for (int i = 1; i < N; i++) {
        fact[i] = (fact[i - 1] * 1LL * i) % M; // Calculating factorials mod M
    }

    int q;
    cin >> q; // Number of queries
    while (q--) {
        int n, k;
        cin >> n >> k; // Input n and k
        int ans = fact[n]; // n!
        int den = (fact[n - k] * 1LL * fact[k]) % M; // (n-k)! * k!
        ans = (ans * 1LL * binexp(den, M - 2, M)) % M; // Applying modular inverse and taking mod M
        cout << ans << endl; // Output the result
    }
    return 0;
}
