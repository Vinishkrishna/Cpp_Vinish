//everything between map and unordered map is same is mostly same
//Difference
//1.inbuilt implementation(hash is used here)
//2.Time complexity,for both insertion and access O(1)(average )
//3.valid keys datatype(complex datatypes can't be used as keys here)//int,long long,double,float,string can be used as keys whereas set,vector,pair can't be used (it can be used but you need declare own hashfunction separately which is not needed in cp)etc
#include <bits/stdc++.h>
using namespace std;
//keys order is not same
void print(unordered_map<int,string> &m){
    cout<<m.size()<<endl;
    for (auto &pr:m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
int main (){
    unordered_map<int,string> m;
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";
    m.insert({4, "afg"});
    m[6];
    auto it = m.find(3);//O(1)
    if (it==m.end())
    {
        cout<<"No value";
    }
    else
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    m.erase(10);//O(log(1))
    print(m);
    multimap<int,string> k;
    //multimap stores key more than one of same name,but generally not used in place this is used like below map
    //map<int,vector<string>> k;
}