//Inbuilt sort:Introsort
// quicksort,heapsort,insertion sort mixture is introsort
#include <bits/stdc++.h>
using namespace std;
//sort()
//takes two parameters
//one starting element address and last sorting element's next address
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>> a[i];
    }
    sort(a,a+n);//nlog(n)
    //ex:sort(a,a+3);
    for (int i = 0; i < n; i++)
    {
        cout<< a[i] <<" ";
    }
}