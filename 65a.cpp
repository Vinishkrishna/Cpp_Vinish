//Binary Exponentiation
#include<bits/stdc++.h>
using namespace std;

int binExpRecur(int a,int b){
    if(b==0) return 1;
    long res=binExpRecur(a,b/2);
    if(b&1){
        return a*res*res;
    }
    else{
        return res*res;
    }
}
//log(N)
int main() {
    int a=2,b=13;
    cout<<binExpRecur(a,b);
    return 0;
}