#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 2;
    int b = 3;
    int sum = a + b;
    cout << "Hello World"
         << " "
         << "My name is Luv";
    // char, int, float, double, bool
    char c = 'a';
    int a = 3;
    double b = 3.5;
    a = 4.5;
    bool d = -123;
    cout << c << " " << a << " " << b << " " << d << endl;
    // long int, long long int
    long long a = 12345;
    int a = 5;
    a = a + 1;
    cout << a << endl;
    cout << a++ << endl;
    cout << a << endl;
    cout << ++a << endl;
    char c = 'a';
    char b = 'c';
    cout << (int)c;
    cout << c - b;
    int a;
    double b;
    char c;
    cin >> a >> b >> c;
    cout << a << " " << b << " " << c << " " << (int)c;
    //
    int a, b, c;
    char d;
    cin >> d >> a;//14 as 1 then 4 as char takes only one
    cout << d << " " << a;
    return 0;
}