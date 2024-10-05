#include<bits/stdc++.h>
using namespace std;
/*
Given array a of n integers.All integers are present in event count except one.Find that one integer which has odd count in O(N) time complexity and O(1) space.
*/
int main(){
    /*
    c^a^b^c^b-->c^a^c^b^b
    -->c^a^c
    -->c^c^a
    -->0^a-->a
    */
    int n;
    cin>>n;
    int x;
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        ans^=x;
    }
    cout<<ans<<endl;
    return 0;
}