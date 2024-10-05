#include <bits/stdc++.h>
using namespace std;
int f; // global variable
int main()
{
    // int a=2;
    // int b=3;
    // int c=1;
    // cout<<(a!=b);
    // cout<<((b>a) || (b>c));
    //$$ ||
    // int n;
    // cin>> n;
    // if(n%2==0){
    //     cout << "YES";//if a variable is used in if it's scope will remain inside it.it can be declared in simple {} also.
    // }
    // else if(n % 3==0){
    //     cout<<" Divisible by 3";
    // }
    // else{
    //     cout<< "NO";
    // }
    // {
    //     int r=6;
    //     cout<<r;
    // }
    // int n,i = 1;
    // while (i <= 10)
    // {
    //     cout << i << endl;
    //     i++;
    // }
    // for(inialisation; conditons; operations){
    //}
    // for (int i = 1; i <= 10; cout << i++ << endl)
    // {
    // }
    int t;
    cin >> t;
    for (int test = 0; test < t; test++) // while(t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    // for(;;){
    // }infinite loop
    // break,continue
    for (int i = 0; i < 10; ++i)
    {
        if (i == 8)
        {
            continue;
        }
        cout << i << endl;
    }
    // sum of digits in a number
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int digit_sum = 0;
        while (n > 0)
        {
            int last_digit = n % 10;
            digit_sum = digit_sum + last_digit;
            n = n / 10;
        }
        cout << digit_sum << endl;
    }