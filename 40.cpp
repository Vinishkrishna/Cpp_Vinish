// Next Greater Element using Stacks
// LIFO
// it means the greater element right next to the element in the array
// By stack
// Put element in stack at first
// for putting next element check whether this number is greater than the current number present in the stack and continue even after poping,if yes pop the number and place the new number inside the stack
// if the coming element is not greater than the current element in stack simply put it in the stack
#include <bits/stdc++.h>
using namespace std;
//here next greater element index is being stored 
vector<int> NGE(vector<int> v)
{
    vector<int> nge(v.size());
    stack<int> st;
    for (int i = 0; i < v.size(); i++)
    {
        while(!st.empty() && v[i] > v[st.top()]){
            nge[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        nge[st.top()]=-1;
        st.pop();
    }
    return nge;
}
//this code has less time complexity
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    vector<int> nge = NGE(v);
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" "<<(nge[i]==-1? -1 :v[nge[i]])<<endl;
    }
    
    return 0;
}
