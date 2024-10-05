//Advanced Recursion and Backtracking
//For single type brackets
//In each step we can put opening/closing bracket
//We can put opening bracket only when we have opening bracket left
//Closing brackets should be inserted when it is left and whatever brackets have been put if opening brackets are greater then closing at current then it can be inserted
#include <bits/stdc++.h>
using namespace std;

vector<string> valid;
void generate(string &s,int open,int close){
    // cout<<s<<endl; (visual check)
    if(open==0 && close==0){//end condition
        valid.push_back(s);
        return;
    }
    //string with how much open and close brackets left one can put
    if(open>0){
        s.push_back('(');
        generate(s,open-1,close);
        s.pop_back();//Backtracking(the previous function call shoould not see the changes made so we are undoing it)
    }
    if(close>0){
        //if the string has greater opening bracket then closed bracket then left over open bracket will be less than close bracket
        if(open<close){
            s.push_back(')');
            generate(s,open,close-1);
            s.pop_back();
        }
    }
}

int main()
{
    int n;
    cin>>n;
    string s;
    generate(s,n,n);
    cout<<"---"<<endl;
    for(auto ele:valid){
        cout<<ele<<endl;
    }
    
}