#include<bits/stdc++.h>
using namespace std;
// Factorial of N
int fact(int n)
{
    if (n == 0)
        return 1;
    for (int i = 0; i < n; i++);     
    return fact(n - 1) * n;
}
int main()
{
    int n;
    cin >> n;
    cout << fact(n);
}
// 1. Number of function calls -> n
// 2. What is complexity of each function ->O(1)
//Multiplication of above two will give time complexity ,here it is O(n^2)