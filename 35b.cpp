#include<bits/stdc++.h>
using namespace std;
void print(unordered_set<string> &s){
    for (string value:s)
    {
        cout<<value<<endl;
    }
}
//order doesn't matter than use this
int main(){
    unordered_set<string> s;
    s.insert("abc");//O(1)
    s.insert("zsdf");
    s.insert("bcd");
    auto it=s.find("abc");//O(1)
    if(it!=s.end()){
        cout<<(*it);
    }
    // print(s);
    //s.erase(it);//will remove the element from set
    //s.erase("abc") will also remove element from set
}