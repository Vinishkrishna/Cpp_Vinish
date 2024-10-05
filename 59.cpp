//In binary numbers indexing is done from right to left
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
    int a=9;
    printBinary(a);
    int i=3;//
    if((a&(1<<i))!=0){//third bit is set or not
        cout<<"set bit";
    }
    else{
        cout<<"not set bit"; 
    } 
    //bit set for i bit position below 
    printBinary(a|(1<<i)); 
    //~a will make 1 as 0 and 0 as 1
    printBinary(a&(~(1<<i)));//Unset i bit of the number
    //toggle a bit-make 0 to 1,and 1 to 0
    printBinary(a^(1<<2));//toggle 2 bit(XOR)
    printBinary(a^(1<<3));//toggle 3 bit(XOR)
    //Bit count means number of set bits in a binary number
    int ct=0;
    for (int i = 31; i >= 0; --i)
    {
        if ((a&(1<<i))!=0)
        {
            ct++;
        }
    }
    cout<<ct<<endl;
    //Inbuilt function for bit count
    cout<<__builtin_popcount(a)<<endl;//for int
    cout<<__builtin_popcountll((1LL<<35)-1)<<endl;//for long long
}