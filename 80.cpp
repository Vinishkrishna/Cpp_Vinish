#include <bits/stdc++.h>
using namespace std;

// Function to check if a character is a vowel
bool isVowel(char ch){
    return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
}

// Function to generate all subsets of a given string
vector<string> subsets(string s){
    int sz=(1<<s.size()); // number of subsets is 2^size of string
    vector<string> ans;
    for (int mask = 0; mask < sz; mask++) {
        string subset;
        for (int bit = 0; bit < s.size(); bit++) {
            if (mask & (1 << bit)) {
                subset.push_back(s[bit]);
            }
        }
        if (subset.size()) {
            ans.push_back(subset);
        }
    }
    return ans;
}

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str[n];
        for (int i = 0; i < n; i++) {
            cin >> str[i];
        }
        unordered_map<string, int> hsh; // vowel combination and count in strings
        for (int i = 0; i < n; i++) {
            set<char> distinct_vw;
            for (char ch : str[i]) {
                if (isVowel(ch)) {
                    distinct_vw.insert(ch);
                }
            }
            string vowel_str;
            for (char ch : distinct_vw) { // Set is converted to string
                vowel_str.push_back(ch);
            }
            vector<string> all_subsets = subsets(vowel_str);
            for (string vowel_subset : all_subsets) {
                hsh[vowel_subset]++;
            }
        }
        long long ans = 0;
        for (auto &pr : hsh) {
            if (pr.second < 3) continue; // because we need to do nC3
            long long ct = pr.second;
            long long ways = ct * (ct - 1) * (ct - 2) / 6; // nC3
            if (pr.first.size() % 2 == 0) ans -= ways; // Exclusion-Inclusion (odd +, even -)
            else ans += ways;
        }
        cout << ans << endl;
    }
}

/*
Input:
2
5
helen
irena
arthos
pentos
tulu
3
alen
bira
cult
*/

// Correct Output: 1 & 0
