#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2, 3, 5, 6, 7};
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    vector<int>::iterator it;//one can not write this and write auto infront of for loop at start like below code
    // for (auto it=v.begin();it!=v.end();++it)
    // {
    //     cout<<(*it)<<" ";
    // }
    for (it=v.begin();it!=v.end();++it)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
    for (int value:v)
    {
        cout<<value<<" ";//can be used with all containers,here values are coming as copy 
    }
    cout<<endl;
    for (int &value:v)
    {
        value++;
        cout<<value<<" ";//can be used with all containers,here values are coming as reference
    }
    cout<<endl;
    vector<pair<int,int>> v_p={{1,2},{2,3}};
    for (pair<int,int> &value:v_p)//(auto &value:v_p)
    {
        cout<<value.first<<" "<<value.second<<endl;//
    }
    cout<<endl;
    auto a=1.0;//dynamically determines datatype of a variable;
    cout<<a<<endl;
    return 0;
}