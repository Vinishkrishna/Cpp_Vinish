#include<bits/stdc++.h>
using namespace std;
// int-31 bits
// u long long-64 bits(upto 64 possible,this is the limitation)
//Bitmasking ,Bit+Mask
//In case n is less we can use bit mask
//& of two no. is O(1)-intersection
//| of two no. is  -union
//workers<5000 ,n(no. of days-30),find two workers with maximum availability to assign the project
int main(){
    int n;
    cin>>n;
    vector<int> masks(n,0);
    for(int i=0;i<n;++i){
        int num_workers;
        cin>>num_workers;
        int mask=0;
        for(int j=0;j<num_workers;++j){
            int day;
            cin>>day;
            mask=(mask|(1<<day));
        }
        masks[i]=mask;
    }
    int max_days=0;
    int person1=-1;
    int person2=-1;
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            int intersection=(masks[i]&masks[j]);
            int common_days=__builtin_popcount(intersection);
            // cout<<i<<" "<<j<<common_days<<endl;
            if(common_days>max_days){
                max_days=common_days;
                person1=i;
                person2=j;
            }
        }
    }
    cout<<person1<<" "<<person2<<" "<<max_days<<endl;
    return 0;
}
//T.C=N^2
/*
Input:
5
4
1 4 7 9
6
2 9 1 7 25 29
7
1 23 4 7 9 11
29
10
2 28 8 7 9 10
30 21 18 19
4
1 11 29 7
*/