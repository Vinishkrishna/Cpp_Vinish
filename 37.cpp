#include <bits/stdc++.h>
using namespace std;
// map<pair<int,int>,int> m; more generally used in cp and in values vector,set generally used
// at first pair first value is checked on insertion - which is less will be inserted first if same first value then the one which has less small second value will be inserted first
// map<set<int>,int> m; same for set
// vector can also act as key and same rule applies to it
// anything can be put in value of a map
int main()
{
    map<pair<string, string>, vector<int>> m;
    //set<pair<int,int>> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        string fn, ln;
        int ct;
        cin >> fn >> ln >> ct;
        for (int j = 0; j < ct; ++j)
        {
            int x;
            cin >> x;
            m[{fn, ln}].push_back(x);
        }
    }
    for (auto &pr : m)
    {
        auto &full_name = pr.first;
        auto &list = pr.second;
        cout << full_name.first << " " << full_name.second << endl;
        cout << list.size() << endl;
        for (auto &element : list)
        {
            cout << element << " ";
        }
        cout << endl;
        return 0;
    }
}
/*
Input type
a b
4
1 2 3 4
c d
2
1 2
d f
3
2 3 4*/