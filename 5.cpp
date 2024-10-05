#include <bits/stdc++.h>
using namespace std;
int main()
{
    //---
    // int n;
    // n=9;
    // cout<<n;
    // n=7;
    // cout<<n;
    //---
    //int a,b; 
    // cout << 7 / 2;
    // cout << 7 / 2.0; // different output
    // cout << 'c' + 1; // calculation happens in higher datatype
    // always calculation happens then it gets stored
    // operators and associativity
    cout << 7 / 2 * 3;
    cout << 3 * 7 / 2;
    // char,int, long int, long long int, float,double
    // -10^9 < int < 10^9
    // -10^12 < long int < 10^12
    // -10^18 < long long int < 10^18
    //-
    int a = 100000;
    int b = 100000;
    int c = a * b;
    // cout << c << endl;
    // int mx = INT_MAX;
    // ;
    // cout << mx + 1;it will give wrong value
    // int a=100000;
    // int b=100000;
    //1.0  is treated as double.1LL long long int
    //long int c=a*b;//here it will store in int which will give wrong answer
    //long long int c=a*1LL*b;
    //long int c=100000000000000;//will give wrong answer as long long int number is stored in long int.
    // cout<<c<<endl;
    double a = 100000;
    double b = 100000;
    double c=a* b;
    cout << fixed<< setprecision(0) <<c<< endl;//fixed will give the answer in scientific notation,setprecision(0) will remove all zeros after .
    //10^18 greater number can be stored in double ,but it will not store it accurately.
}