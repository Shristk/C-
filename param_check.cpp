#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class Solution {
public:
    string isValid(string s) {
        stack<char>st;
        if(s.length()==1){
            return "false";
        }
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
            }
            else if(!st.empty()){
                if(s[i]==')' && st.top()=='(')
                st.pop();
                else if(s[i]==']' && st.top()=='[')
                st.pop();
                else if(s[i]=='}'&& st.top()=='{')
                st.pop();
                else{
                    return "false";
                }
            }
            else{
                return 0;
            }
        }
        if(st.empty()){
            return "true";
        }
        else{
            return "false";
        }
    }
};
int main(){
    Solution sol;
    string s;
    cout<<"enter the string:";
    cin>>s;
    string k=sol.isValid(s);
    cout<<k;
    return 0;
}