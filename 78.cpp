// Hacker Decrypting Messages
#include <bits/stdc++.h>
using namespace std;
const int N=2e6+10;
int a[N];
int hp[N];
int canRemove[N];//canRemove[i]-> if i can be removed or not-1 else 0(i will be present or a number whose power is i will be present else 0)
int hsh[N];
//Concepts used
/*
Iterate over multiples
Highest prime
Prime Factorization
*/
vector<int> distinctPF(int x){//distinct prime factors of a number
    vector<int> ans;
    while (x>1)
    {
        int pf=hp[x];
        while (x%pf==0) x/=pf;
        ans.push_back(pf);
    }
    return ans;
}

int main(){
    for (int i = 2; i < N; i++)
    {
        if(hp[i]==0){//hp of any number
            for (int j = i; j < N; j+=i)
            {
                hp[j]=i;
            }
        }
    }
    int n,q;
    cin>>n>>q;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        hsh[x]=1;
    }
    for (int i = 2; i < N; i++)
    {
        if (hsh[i])
        {
            for (long long j = i; j < N; j*=i)
            {
                canRemove[j]=1;//marking number and its power as 1
            }
            
        }
        
    }
    
    while (q--)
    {
        int x;
        cin>>x;
        vector<int> pf=distinctPF(x);
        bool isPossible=false;
        for (int i = 0; i < pf.size(); i++)
        {
            for (int j = i; j < pf.size(); j++)//to select two prime factors(here j!=0,because if so pairs will get repeated,like 1,0 and 0,1 )
            {
                int product=pf[i]*pf[j];
                if (i==j && x%product!=0) continue;//here say 60 can be divided by 2*2 and,but 30 can't,as two comes only once,so for 30,2 will not be considered twice.
                int toRemove=x/product;
                if (canRemove[toRemove]==1 || toRemove==1)//if a number is made up of only two prime factors,then toRemove will become one.
                {
                    isPossible=true;
                    break;
                }
            }
            if (isPossible) break;
        }
        cout<<(isPossible?"YES\n":"NO\n");
    }
    //Q*(logN+100)(as maximum distict prime factors,can be 10 for say 10^6)
    return 0;
}
/*
4 3
2 22 7 10
16 429 42
*/