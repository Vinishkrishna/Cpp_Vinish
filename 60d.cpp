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
    //clear MSB after 3rd bit
    printBinary(59);
    int a=59;
    int i=3;
    cout<<(a&(~((1<<(i+1))-1)))<<endl;
    /*
    00000111011&00000001111=00000100000
    ~00000001111=00000010000-1
    */
    int b=(a&(((1<<(i+1))-1)));
    printBinary(b);
    return 0;
}