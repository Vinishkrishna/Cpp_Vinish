//Nth Root of a Number using Binary Search
//For integers
//4-sqrt
//1 2 3 4(search space with between values)
//if 3X3 is greater than 4 than it's sqrt will be less than 3,else 3X3 is lesser than 4 than it's sqrt will be more than 3
//For decimals,search space will vary based on the number of decimals you want in output
//For 5 decimal accuracy,10^-6 is epsilon(i.e 10^-(x+1))

#include <bits/stdc++.h>
using namespace std;

//Lets say ,I want 5 decimal spaces accuracy
double eps=1e-6;

int main(){
    double x;
    cin >>x;
    double lo=1,hi=x,mid;
    while(hi-lo>eps){
        mid=(hi+lo)/2;
        if(mid*mid<x){
            lo=mid;
        }
        else{
            hi=mid;
        }
    }
    //Time complexity-p*Log(N*(10^d)) , d is the number of decimal places accuracy you need,for p root of number N
    cout<<setprecision(10)<<lo<<"\n"<<hi<<endl; //hi and lo are same
    //Check
    cout<<pow(x,1.0/2)<<endl;
}