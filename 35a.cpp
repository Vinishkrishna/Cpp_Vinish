#include <bits/stdc++.h>
using namespace std;
//print only unique strings entered from input
int main()
{
    set<string> s;
    int n;
    cin >> n;
    for (int i = 0;i < n; ++i){
        string str;
        cin >> str;
        s.insert(str);
    }
    for (auto value : s){
        cout << value << endl;
    }
}