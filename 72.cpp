#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
vector<bool> isPrime(N,1);
//If a number is prime then remove all number which are the multiple of the number in the number space.
//If you reach a number and the number before it hasn't crossed it,then it is prime.
/*Q<10^7,N<10^7
By sqrt method
10^7*sqrt(10^7)
*/
int main(){
    isPrime[0]=isPrime[1]=false;
    for (int i = 2; i < N; i++)
    {
        if(isPrime[i]==true){
            for (int j = 2*i; j < N; j+=i){
                isPrime[j]=false;
            }
        }
    }
    int q;
    cin>>q;
    while (q--)
    {
        int num;
        cin>>num;
        if (isPrime[num])
        {
            cout<<"prime\n";
        }
        else{
            cout<<"not prime\n";
        }
    }
    return 0;
}