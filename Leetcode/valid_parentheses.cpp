/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:
Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
---------------------------
Input: s = "()"
Output: true
---------------------------
Input: s = "()[]{}"
Output: true
---------------------------
Input: s = "(]"
Output: false
---------------------------
Input: s = "([)]"
Output: false
---------------------------
Input: s = "{[]}"
Output: true
*/
class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0 ; i<s.size() ; ++i){
            // if closing bracket is found and stack is still empty, it means its matching bracket can't be found so return false
            if(s[i]==')' || s[i]=='}' || s[i]==']'){
                if(st.empty()) return false;
            }
            // if we find any closing bracket and if the stack contains same type of opening bracket then pop from the stack else return false beause stack will never become empty after that
            if(s[i]==')'){
                if(st.top() == '(') st.pop();
                else return false;
            }else if(s[i]=='}'){
                if(st.top()=='{') st.pop();
                else return false;
            }else if(s[i]==']'){
                if(st.top()=='[') st.pop();
                else return false;
            }
            // if we find any opening bracket then push it to the stack so that if any matching bracket is found, it can be popped
            if(s[i]=='(' || s[i]=='{' || s[i]=='[') st.push(s[i]);
        }
        // after all the process, if the stack becomes empty then all parentheses got matched, hence returns true else false
        return st.empty();
    }
};
//////////////////////////////////////
class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        if(st.size()==1) return false;
        char prev;
        for(int i=0 ; i<s.size() ; ++i){
            // keep pushing the opening brackets
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
                continue;
            }
            // if stack is found empty, it means string contains closing bracket at first so return false as it can't be matched later
            if(st.empty()) return false;
            // if string contains closing brackets then check for top element in stack, if it doesn't contain corresponding opening bracket then return false
            switch(s[i]){
                case ')' : prev = st.top(); st.pop();
                    if(prev=='{' || prev=='[') return false;
                    break;
                case '}' : prev = st.top(); st.pop();
                    if(prev=='(' || prev=='[') return false; 
                    break;
                case ']' : prev = st.top();st.pop();
                    if(prev=='{' || prev=='(') return false;
            }
            
            
        }
        if(st.empty()) return true;
        return false;
    }
};
