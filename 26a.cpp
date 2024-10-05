#include<bits/stdc++.h>
using namespace std;
//digit sum
//digit_sum(n) -> digit_sum(n/10) + last_digit
//1234->4+digitsum(123)
int digit_sum(int n){
    if(n==0) return 0; 
    return digit_sum(n/10)+(n%10);
}
int main(){
    int n;
    cin>>n;
    cout<<digit_sum(n);
    return 0;
}
// 1. Number of function calls -> number of digits of n
// 2. What is complexity of each function ->O(1)
// log(n/10),as n can be divided by 10 these many times