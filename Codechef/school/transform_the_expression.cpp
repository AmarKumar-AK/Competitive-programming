#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        // vector<char>res;
        stack<char>st;
        for(int i=0 ; i<s.size() ; ++i){
            if(s[i]== '('){
                continue;
            }else if( (s[i]>=97 && s[i]<=122) || (s[i]>=65 && s[i]<=90) ){
                //print the element
                cout<<s[i];
            }else if(s[i] == '('){
                // push into stack
                st.push(s[i]);
            }else if(s[i] == ')'){
                //keep popping and printing top element of stack till '(' is encountered (DO NOT print '('))
                while(s.top() != '('){
                    cout<<s.top();
                    s.pop();
                }
                s.pop();
            }else if()
        }
        for(auto i: res){
            cout<<i;
        }
    }
    return 0;
}