#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> divisors[N];
int sum[N];//sum of a particular number divisors
int main(){
    for (int i = 2; i < N; i++)
    {
        for (int j = i; j < N; j+=i){
            divisors[j].push_back(i);
            sum[j]+=i;
        }
    }
    //N*log(N) time complexity
    for (int i = 0; i < 10; i++)
    {
        for (int div:divisors[i])
        {
            cout<<div<<" ";
        }
        cout<<endl;
    }
    return 0;
}