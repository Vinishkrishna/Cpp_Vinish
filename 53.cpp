//Advanced binary search with predicate function
//Eko-Eko
#include <bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int n;//trees
long long m;//wood
long long trees[N];
//TC:O(N*log(H)) H is maximum tree height,N is size of array
bool isWoodSufficient(int h){
    long long wood=0;
    for(int i=0;i<n;++i){
        if(trees[i]>=h){
            wood+=(trees[i]-h);
        }
    }
    return wood>=m;
}
//lo=True and hi=False is possible when while condition breaks, in such case,else case gets printed
int main(){
    cin>>n>>m;
    for(int i=0;i<n;++i){
        cin>>trees[i];
    }
    long long lo=0,hi=1e9,mid;
    while(hi-lo>1){
        mid=(hi+lo)/2;
        if(isWoodSufficient(mid)){
            lo=mid;
        }
        else{
            hi=mid-1;
        }
    }
    if(isWoodSufficient(hi)){
        cout<<hi<<endl;
    }
    else{
        cout<<lo<<endl;
    }
    return 0;
}
