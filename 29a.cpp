// Vectors are like dynamic array
//Vector size limits same as array limits in local and global
#include <bits/stdc++.h>
using namespace std;
void printVec(vector<int> v)// vector<int> &v (by reference)
{
    cout<<"size: "<<v.size()<<endl;
    for (int i = 0; i < v.size(); ++i)
    {
        cout<< v[i] << " ";
    }
    v.push_back(2);
    cout<<endl;
}

int main()
{
    vector<int> v;
    //vector<int> v(10); vector of size 5 by default all 0
    //vector<int> v(10,3); vector of size 10 by all 3 in it.
    //v.push_back(7) 7 at the 11 position
    //v.pop_back(); removes last element O(1)
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; ++i)
    // {
    //     int x;
    //     cin >> x;
    //     printVec(v);
    //     v.push_back(x);//element added at last O(1)
    // }
    // printVec(v);
    v.push_back(7);
    v.push_back(6);
    //vector<int> v2=v;//like pass by value O(n)
    vector<int> &v2=v;//like pass by reference
    v.push_back(5);
    printVec(v);
    printVec(v);
    printVec(v2);
    //--
    // vector<string> v;
    // int n;
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     string s;
    //     cin>> s;
    //     v.push_back(s);
    // }
    
}