#include<bits/stdc++.h>
using namespace std;
//To convert uppercase to lowercase set the fifth bit
void printBinary(int num){
    for (int i = 10; i >= 0; --i)
    {
        cout<<((num>>i)&1);
    }
    cout<<endl;
}

int main(){
    for(char c='A';c<='E';++c){
        cout<<c<<endl;
        printBinary(int(c));
    }
    for(char c='a';c<='e';++c){
        cout<<c<<endl;
        printBinary(int(c));
    }
    cout<<"--"<<endl;
    char A='A';
    char a=A | (1<<5);
    cout<<a<<endl;
    cout<<char((a&(~(1<<5))))<<endl;
    printBinary(int('_'));
    cout<<char(1<<5)<<endl;
    cout<<char('C' | ' ')<<endl; //'' is 1<<5
    cout<<char('c' & '_')<<endl; //_ is 00001011111
    return 0;
}