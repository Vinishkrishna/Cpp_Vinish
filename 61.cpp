#include<bits/stdc++.h>
using namespace std;

int main(){
    //Power of XOR opearator
    int a=4,b=6;
    a=a^b;
    b=b^a;//b-->a
    //b=b^(a^b)==>b^b^a
    a=a^b;//a-->b
    //a=(a^b)^a==>a^a^b-->b
    /*
    1 0->1
    0 1->1
    0 0->0
    1 1->0
    x^x==0
    x^0==x
    x^y^z==x^z^y==y^x^z
    */
    cout<<a<<" "<<b<<endl;
}