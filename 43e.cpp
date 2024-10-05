#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int,int> m; //applied only on keys 
    //same for pairs and strings
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    //auto it=lower_bound(s.begin(),s.end(),5); //in case of set it is O(n) for set and maps
    auto it=s.lower_bound(5); //log(n)
    
    cout<<(*it)<<endl;
}