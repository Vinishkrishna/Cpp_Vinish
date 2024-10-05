#include <bits/stdc++.h>
using namespace std;
//STL inbuilt algorithms
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int min=*min_element(v.begin(),v.end()); //min_element returns a pointer, * will give the value
    cout<<min<<endl;
    int max=*max_element(v.begin()+3,v.end());
    cout<<max<<endl;
    //For sum
    int sum=accumulate(v.begin(),v.end(),0);//0 is the initial sum
    cout<<sum<<endl;
    int ct=count(v.begin()+1,v.end(),6);
    cout<<ct<<endl;
    auto it=find(v.begin(),v.end(),10);//returns elements index
    if (it!=v.end())
    {
        cout<<*it<<endl;
    }
    else{
        cout<<"Element not found";
    }
    reverse(v.begin(),v.end());
    for (auto val:v)
    {
        cout<<val<<" ";
    }
    return 0;
    // string s="abcdsfdjf"
    //reverse(s.begin()+1,s.end());
    //min,max,sum are O(n) everywhere
    //count and find are O(n) in vector and array ,rest O(log(n))
}