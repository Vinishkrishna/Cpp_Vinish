#include<bits/stdc++.h>
using namespace std;
void print(multiset<string> &s){
    for (string value:s)
    {
        cout<<value<<endl;
    }
}
//multiple same values can be added
int main(){
    multiset<string> s;
    s.insert("abc");//O(log n) because it uses red black trees  
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc");
    auto it=s.find("abc");//O(log n) , here find will return the first abc iterator value
    // s.erase(it) will delete only one
    // s.erase("abc") will delete all "abc"
    if(it!=s.end()){
        // cout<<(*it);
    }
    print(s);
    //s.erase(it);//will remove the element from set
    //s.erase("abc") will also remove element from set
    //s.size(),s.clear() can also be used
}