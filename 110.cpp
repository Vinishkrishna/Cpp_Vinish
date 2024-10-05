#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int dp[1005];
const int o=8;  // Make 'o' a constant
int price[o] = {1, 5, 8, 9, 10, 17, 17, 20};  // Correct array declaration

int func(int len, vector<int>& prices) {
    if (len == 0) return 0;
    if (dp[len] != -1) return dp[len];
    int ans = 0;
    for (int len_to_cut = 1; len_to_cut <= prices.size(); ++len_to_cut) {
        if (len - len_to_cut >= 0) {
            ans = max(ans, func(len - len_to_cut, prices) + prices[len_to_cut - 1]);
        }
    }
    return dp[len] = ans;
}

// O(N^2), N is 1000 here
int cutRod(int len, vector<int>& prices) {
    memset(dp, -1, sizeof(dp));
    return func(len, prices);
}

int main() {
    vector<int> prices(price, price + o);  // Convert array to vector before passing
    cout << cutRod(o, prices) << endl;     // Print the result
}
