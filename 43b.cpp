#include <bits/stdc++.h>
using namespace std;
// lower bound and upper bound work on things which are already sortedṇ
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    // int *ptr=upper_bound(a+4,a+n,5);
    int *ptr=upper_bound(a,a+n,5); //log(n)
    if(ptr==(a+n)){
        cout<<"Not found";
        return 0;
    }
    cout<<(*ptr)<<endl;
}