#include <bits/stdc++.h>
using namespace std;

// bool cmp(pair<int,int> a,pair<int,int> b){
//     if(a.first!=b.first){
//         if(a.first>b.first) return false;
//         return true;
//     }
//     else{
//         if(a.second<b.second) return false;
//         return true;
//     }
// }
//easy way to use comparator function is return what you want
bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.first!=b.first){
        return a.first<b.first;
    }
    return a.second>b.second;
}
//for int in decreasing order
// bool cmp(int a,int b){
//     return a>b;
// }
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>> a[i].first>>a[i].second;
    }
    //default sort behaviour is ascending
    //the inbuilt comparator function tells that if you want to sort then return false and if you not want to swap then return true
    sort(a.begin(),a.end(),cmp);
    //greater() is a decreasing default comparator function
    //ex: greater<pair<int,int>>();
    for (int i = 0; i < n; i++)
    {
        cout<< a[i].first <<" "<<a[i].second<<endl;
    }
    cout<<endl;
}
/*
6
4 3
5 5
5 3
25 6
7 9
8 5
*/