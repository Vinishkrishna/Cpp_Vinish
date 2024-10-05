//Large exponentiation using Binary multiplication
#include<bits/stdc++.h>
using namespace std;
const int M=1e18+7;
//Normal: a<=10^9,b<=10^9,M<=10^9
/*Case 1:
a<=10^18 like 2^1048,do modulo of a in this case
Case 2:
M<=10^18 then a value can be 10^18,but a*a will overflow.To deal with this use binary multiply.
*/
int binMultiply(long long a,long long b){
    int ans=0;
    while(b){
        if(b&1){
            ans=(ans+a)%M;
        }
        a=(a+a)%M;
        b>>=1;
    }
    return ans;
}

int binExpIter(int a,int b){
    int ans=1;
    while(b){
        if(b&1){
            ans=binMultiply(ans,a);
        }
        a=binMultiply(a,a);
        b>>=1;
    }
    return ans;
}
//Log^2(N)

int main(){
    int a=2,b=13;
    cout<<binExpIter(a,b)<<endl;
}
