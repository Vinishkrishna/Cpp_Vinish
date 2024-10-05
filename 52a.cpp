//Nth root

#include <bits/stdc++.h>
using namespace std;

//Lets say ,I want 5 decimal spaces accuracy
double eps=1e-6;
double multiply(double mid,int n){
    double ans=1;
    for(int i=0;i<n;++1){
        ans*=mid;
    }
    return ans;
}

int main(){
    double x;
    int n;
    cin >>x>>n;
    double lo=1,hi=x,mid;
    while(hi-lo>eps){
        mid=(hi+lo)/2;
        if(multiply(mid,n)<x){
            lo=mid;
        }
        else{
            hi=mid;
        }
    }
    cout<<setprecision(10)<<lo<<"\n"<<hi<<endl; //hi and lo are same
    //Check
    cout<<pow(x,1.0/n)<<endl;
}