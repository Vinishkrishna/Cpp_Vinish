#include<bits/stdc++.h>
using namespace std;
//Lowest prime and Highest prime of a number
//highest prime of j,is the last prime number which marks j as false is hp[j]
//lp[j] is ,if any prime number marks a number first then it is the lowest prime
const int N=1e7+10;
vector<bool> isPrime(N,1);
vector<int> lp(N,0),hp(N,0);

int main(){
    isPrime[0]=isPrime[1]=false;
    for (int i = 2; i < N; i++)
    {
        if(isPrime[i]==true){
            lp[i]=hp[i]=i;//for prime numbers
            for (int j = 2*i; j < N; j+=i){
                isPrime[j]=false;
                hp[j]=i;
                if (lp[j]==0)
                {
                    lp[j]=i;
                }
            }
        }
    }
    for (int i = 2; i < 100; i++)
    {
        cout<<lp[i]<<" "<<hp[i]<<endl;
    }
    
    return 0;
}