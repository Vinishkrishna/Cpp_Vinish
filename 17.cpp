#include <bits/stdc++.h>
using namespace std;
/*
Given a number N. Print its factorial.
Constraints
1 <= N <= 100
print answer module M
where M = 47
A % M
Generally M=10^9+7 because
1)this value is very close to integer maximum.
2)Multiplicative inverse-the number is a prime number,for all M we can't calculate multiplicative inverse of number given,but if m is prime multiplicative inverse of 1-M any number can be calculated.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int M=47;
    long long fact = 1;
    for (int i = 2; i <= n; ++i)
    {
        fact = (fact * i)%M;//same for +
        cout << fact;//here one can print fact of n,but factorial of 21 is more than long long int,so they asked to print answer modulo m ,which will be less than m.But ! more than 21 computation will only be more than long long int so %m needs to be performed in each step
    }
}