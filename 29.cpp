// pairs and vectors
#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, string> p; // used to maintain relationship between two things
    //cin>>p.first;
    // p=make_pair(2,"abc");
    //p = {2, "abcd "}; // another way
    // pair<int,string> p1=p;//its a copy(like pass by value)
    //pair<int, string> &p1 = p; // its a copy(like pass by reference)
    //p1.first = 3;
    //cout << p.first << " " << p.second << endl;
    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};
    pair<int, int> p_array[3];
    p_array[0] = {1, 2};
    p_array[1] = {2, 3};
    p_array[2] = {3, 4};
    swap(p_array[0],p_array[2]);
    for (int i = 0; i < 3; i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
}