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
    int N;
    cin>>N;
    vector<vector<int>> v;
    //without a element in it v[i] doesn't exist
    for (int i = 0; i < N; i++)
    {
        int n;
        cin>>n;
        vector<int> temp;// v.push_back(vector<int> ())
        for (int j = 0; j < n; j++)
        {
            int x;
            cin>>x;
            temp.push_back(x); //if empty vector push back of cin by v[i].push_back(x)
        }
        v.push_back(temp);
    }
    // v[0].push_back(10);
    // v.push_back(vector<int> ()) empty vector passed
    for (int i = 0; i < v.size(); i++)
    {
        printVec(v[i]);
    } 
    return 0;
}