#include <bits/stdc++.h>
using namespace std;
void printHello()
{
    cout << "Hello World";
}
int sum(int a, int b)
{
    int result = a + b;
    return result;
}
int digit_sum(int n)
{
    int digit_sum = 0;
    while (n)
    {
        digit_sum = digit_sum + n % 10;
        n = n / 10;
    }
    return digit_sum; // when return is reached code execution stopes there
}
// void increment(int n) it is pass by value(copy)
void increment(int &n,int n1)
{
    n++;
    n1++;
}
// references are a kind of replacement to pointer
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

//in competitive programming array sizes are declared globally and used
const int N=1e5+10;// n size is upto 10^5 asked in question
int a[N];//these arrays no need to be passed in function,only for competitive programming not asked to used in industry
int func(){
    a[0]=5;
}
// void func(int a[]){//void func(int a[],int n){
//     a[0]=5;
// }
// void func (int n, int m, int a[] [m]) { this generally needs to be avoided m use at this point is not good practice
//     a[0][0] = = 5;
// } 
// void func(int a[][20]){//void func(int a[][]) is not allowed,but (int a[]) is allowed
//     a[0][0]=5;
// }
int main()
{
    // return 0 is optional in int main code
    //  cout << sum(2, 3);
    //  int a,b;
    //  cin >>a>>b;
    //  cout << digit_sum(a) + digit_sum(b);int a = 3;
    // int a=3;
    // cout << a << endl;
    // increment(a);
    // cout<< a << endl;
    // int a=3;
    // int b=5;
    // cout<<a<<" "<<b<<endl;
    // increment(a,b);
    // swap(a,b);//swap() is also a inbuilt function in c++
    //max(a,b) and min(a,b) is also a inbuilt function in python
    // cout<<a<<" "<<b<<endl;
    //arrays are always passed by reference
    // int a[10];
    // a[0]=7;
    // cout<<a[0]<<endl;
    // func(a);
    // cout<<a[0]<<endl;
    // int a[10][20];
    // a[0][0]=7;
    // cout<<a[0][0]<<endl;
    // func(a);
    // cout<<a[0][0]<<endl;
    int n,m;
    int a[n][m];
    a[0][0]=7;
    cout<<a[0][0]<<endl;
    func();
    cout<<a[0][0]<<endl;
}