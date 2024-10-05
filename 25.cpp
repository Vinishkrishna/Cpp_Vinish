#include <bits/stdc++.h>
using namespace std;
//in recursion the part after function is executed when function call returns from base condition
void func(int n)
{
    if (n == 0)
        return;
    cout << n << endl;
    func(n - 1);
    // cout << n << endl;
}
int main(){
    func(5);
    return 0;//infinite function call gives segmentation error
}