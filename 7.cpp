#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string str = "Hello";
    // cout << str << endl;
    // string str2;
    // cin >> str2;
    // cout << str2 << endl;
    // string str = "Hello";
    // cout<<str[0];
    // str[0]='a';//allowed,it is a character
    // cout<<str.size();
    // string str2 = "hello";
    // string result = str + str2;
    // if (str == str2)
    // {
    //     cout << "Equal";
    // }
    // else
    // {
    //     cout << "Not Equal";
    // }
    // string str3,str4;
    // cin>>str3>>str4;
    // cout<<str3<<" "<<str<<endl;
    // string str1,str2;
    // getline(cin,str1);//to take a string input with spaces
    // cout<<str1;
    // int t;
    // cin >> t;//cin ignores spaces and newlines,it moves cursur until it encounters spaces/newline
    // cin.ignore();//will move code to next line
    // while (t--)
    // {
    //     string s;
    //     getline(cin, s);
    //     cout << s << endl;
    // }
    //reverse a string
    // string str;
    // cin >> str;
    // string str_rev;
    // for(int i = str.size() - 1; i>= 0; --i){
    //     str_rev.push_back(str[i]);//it will add the character at the back of the string// str_rev = str_rev + str[i];
    // }
    // cout << str_rev;
    //for numbers greater than 10^18 take input as string
    string s;
    cin>>s;
    cout<<(int)s[s.size()-1];
    int last_digit=s[s.size()-1]-'0';//it will give the number ,as 0 and the numbers ascii values are being compared.
    cout<<last_digit;
}
