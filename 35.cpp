#include<bits/stdc++.h>
using namespace std;
void print(set<string> &s){
    for (string value:s)
    {
        cout<<value<<endl;
    }
    // for (auto it=s.begin();it!=s.end();++it)
    // {
    //     cout<<(*it)<<endl;
    // }
}
int main(){
    set<string> s;//like keys stored in sorted order uniquely
    s.insert("abc");//log(n),if you put second insert of the same element - it will not get inserted
    s.insert("zsdf");
    s.insert("bcd");
    auto it=s.find("abc");//if not found s.end() will be returned log(n)
    if(it!=s.end()){
        cout<<(*it);
    }
    // print(s);
    //s.erase(it);//will remove the element from set
    //s.erase("abc") will also remove element from set
}