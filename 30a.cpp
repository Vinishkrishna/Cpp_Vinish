#include <bits/stdc++.h>
using namespace std;
void printVec(vector<int> &v)
{
    cout<<"size: "<<v.size()<<endl;
    for (int i = 0; i < v.size(); ++i)
    {
        cout<< v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    //vector<int> v[10];//10 vector of size 0 at first
    int N;
    cin>>N;
    vector<int> v[N];//like number of rows fixed but columns not fixed
    for (int i = 0; i < N; i++)
    {
        int n;
        cin>>n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x); 
        }
        
    }
    for (int i = 0; i < N; i++)
    {
        printVec(v[i]);
    }
    //v.pop_back() removes elements from back
    // cout<<v[0][0]; 
    return 0;
}