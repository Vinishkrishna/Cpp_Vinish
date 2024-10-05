// Time complexity
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int x = 0;
    // int sum = 0;
    // sum = x + x;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int y;
    //     y = 5;
    //     y++;
    // }
    /*
    Number of iterations=3
    n<100000
    //O(5)+O(3*n)
    //O(n) is overall complexity*/
    /*
    1)O(N)+O(N)..till it is not a significant number of O(N),untill then time complexity is O(N)
    2)O(k*N)is O(N) untill k<N
    O(3),O(4),O(5),O(10) all together constitute O(1)*/
    /*
    Number of iterations running in online programming websites in 1sec-(10^7-10^8)
    say 10^7-takes 1 sec
    10^8 takes 10sec
    10^9 takes 100sec...*/
    // int n;
    // cin >> n;
    // int ct = 0;
    // while (n > 0)
    // {
    //     n = n / 2;
    //     ct++;
    //     return 0;
    // }
    // time complexity-(log(n) base 2)15.png
    // int n;
    // cin >> n;
    // int ct = 0;
    // for (int i = 0; i <= n; ++i)
    // {
    //     for (int j = 0; j < i; ++j)
    //     {
    //         ct++;
    //     }
    //     // O(n^2 is time complexity)
    // }
    // t and n 1000
    int t;
    cin >> t;
    int ct = 0;
    /*
    Size N. Print sum of array in each test
    case.
    Constraints:
    1 < T <= 100000
    1 <= N <= 100000
    1 <= a[i] <= 1000
    Sum of N over all Test cases is < 10^7
    */
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            sum += x;
            ct++;//O(ct) <10^7 this code will work it is a special case
        }
        cout << sum << endl;
        cout<<ct<<endl; 
        return 0;
    }
    // O(T*N) as t and n are similar i.e O(N^2)
}