//Advanced binary search with predicate function
//AGGRCOW
//To find maximum minimum distance in which cows can be arrangement without aggression
#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int n,cows;//stalls,cows
int positions[N];

bool canPlaceCows(int minDist){
    int lastPos=-1;//last cow kept position
    int cows_ct=cows;
    for(int i=0;i<n;++i){//lastPos==-1 first cow to place in below code
        if(positions[i]-lastPos>=minDist || lastPos==-1){
            cows_ct--;
            lastPos=positions[i];
        }
        if(cows_ct==0) break;
    }
    return cows_ct==0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>cows;
        for(int i=0;i<n;++i){
            cin>>positions[i];
        }
        sort(positions,positions+n); //Nlog(n)
        int lo=0,hi=1e9,mid;
        while(hi-lo>1){
            int mid=(lo+hi)/2;
            if(canPlaceCows(mid)){
                lo=mid;
            }
            else{
                hi=mid-1;
            }
        }//Log(10^9)*N
        if(canPlaceCows(hi)){
            cout<<hi<<endl;
        }
        else{
            cout<<lo<<endl;
        }
    }
    return 0;
}