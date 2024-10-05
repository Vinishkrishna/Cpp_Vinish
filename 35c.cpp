#include <bits/stdc++.h>
using namespace std;
//print onlystrings entered from input is present or not
//hashtables used
//here also keys can't be complex like pair etc;
int main()
{
    unordered_set<string> s;
    int n;
    cin >> n;
    for (int i = 0;i < n; ++i){
        string str;
        cin >> str;
        s.insert(str);
    }
    int q;
    cin>>q;
    while (q--)
    {
        string str;
        cin>>str;
        if (s.find(str)==s.end())
        {
            cout<<"no\n";
        }
        else{
            cout<<"yes\n";
        }
    }
}