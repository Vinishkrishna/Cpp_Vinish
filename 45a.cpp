#include <bits/stdc++.h>
using namespace std;
//STL inbuilt algorithms and lambda function
int main()
{
    //lambda function starts with [] ,{int x} represents values to take,{return .. },returns value, (2) calls function
    cout<<[](int x){return x+2;}(2)<<endl;
    cout<<[](int x,int y){return x+y;}(4,7)<<endl;
    //To use it again we can assign it to a variable
    auto sum = [](int x,int y){return x+y;};
    cout<<sum(2,3);
}