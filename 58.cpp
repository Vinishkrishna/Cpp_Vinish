//Binary Numbers and Bits basics for competitive Programming
#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<INT_MAX<<endl;
    int a=(1LL<<31)-1;//(1<<31) is INT_MAX,(1<<32) can't be stored //signed integer(stores positive(0) and negative(1)){-x to x range}
    cout<<a<<endl;
    unsigned int b=(1LL<<32)-1;//It can store values(stores only positive){0 to 2*x range}
    cout<<b<<endl;
    return 0;
}