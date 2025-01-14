//Implement upper bound and lower bound with binary search
#include <bits/stdc++.h>
using namespace std;

int upper_bound(vector<int> &v,int element){
    int lo=0,hi=v.size()-1;
    int mid;
    while(hi-lo>1){
        int mid=(hi+lo)/2;
        if(v[mid]<=element){
            lo=mid+1;
        }
        else{
            hi=mid;
        }
    }
    if(v[lo]>element){
        return lo;
    }
    if(v[hi]>element){
        return hi;
    }
    return -1;
}
//In both upper and lower bound the second if condition may not be reached containing hi,this is my self interpretation(so it can be removed)
int lower_bound(vector<int> &v,int element){
    int lo=0,hi=v.size()-1;
    int mid;
    while(hi-lo>1){
        int mid=(hi+lo)/2;
        if(v[mid]<element){//Because we want to keep greater then equal to part in search space
            lo=mid+1;
        }
        else{
            hi=mid;
        }
    }
    if(v[lo]>=element){
        return lo;
    }
    if(v[hi]>=element){
        return hi;
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int element;
    cin>>element;
    int lb=lower_bound(v,element);
    cout<<lb<<" "<<(lb!=-1?v[lb]:-1)<<endl;
    int ub=upper_bound(v,element);
    cout<<ub<<" "<<(ub!=-1?v[ub]:-1);
    return 0;
}