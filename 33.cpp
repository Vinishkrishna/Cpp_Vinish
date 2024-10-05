#include <bits/stdc++.h>
using namespace std;
//maps like dictionaries
//unordered maps are not stored in sorted order
//ordered maps stored in sorted order with respect to keys,if strings used as key stored as same way as stored in dictionaries
void print(map<int,string> &m){
    cout<<m.size()<<endl;
    for (auto &pr:m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
int main (){
    map<int,string> m;
    m[1] = "abc";//O(log(n)) n map current size
    m[5] = "cdc";
    m[3] = "acd";
    m.insert({4, "afg"});//make_pair method
    m[6];//also takes O(log(n) time)
    //taking a value from map also takes log(n) time
    // map<int, string>::iterator it;
    // for (it = m.begin(); it != m.end(); ++it)
    // {
    //     cout << (*it).first << " " << (*it).second<<endl;
    // }
    //by default string default value in value of map is "" and for int,double is 0,vector will have empty vector as default
    //keys are unique in map
    //reassigning of a key with value will change key's value to new value
    auto it = m.find(3);//will return value of key (O(log(n))iterator ,if not found the key,it will return m.end()(that is last element's next value)
    if (it==m.end())
    {
        cout<<"No value";
    }
    else
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    if(it!=m.end())
        m.erase(it);
    // m.erase(10);//(put key value in it(if key not present nothing will be removed, and the map will remain unchanged. /iterator and you can't give an iterator which doesn't exist) will remove 3 key from map(O(log(n)))
    print(m);
    //m.clear() will remove everything from map
    //size,find,erase will be same for everything like map,vector,set etc.
    //m.insert time complexity also depends on key size also s.size() * log(n) s is the string being inserted and n is map size
    //m[s]=m[s]+1/m[s]++ is same if value is int
}