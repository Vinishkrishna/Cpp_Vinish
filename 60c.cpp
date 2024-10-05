#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){
    for (int i = 10; i >= 0; --i)
    {
        cout<<((num>>i)&1);
    }
    cout<<endl;
}

int main(){
    //clear LSB till 4th from 0th
    printBinary(59);
    int a=59;
    int i=4;
    cout<<(a&(~((1<<(i+1))-1)))<<endl;
    /*
    00000100000-1=00000011111
    ~00000011111=11111100000
    */
    int b=(a&(~((1<<(i+1))-1)));
    printBinary(b);
    return 0;
}