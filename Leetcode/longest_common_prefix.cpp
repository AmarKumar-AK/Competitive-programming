/*
Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".
--------------------------------------
Input: strs = ["flower","flow","flight"]
Output: "fl"
--------------------------------------
Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
*/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n==0) return "";
        // after sorting, smallest string will be the first string and largest string will be the last string
        // string will also be arranged in lexicographical order, so we need to compare only first and last string in order to find the longest common prefix
        sort(strs.begin(),strs.end());
        string a = strs[0];
        string b = strs[n-1];
        string lcp = "";
        for(int i=0 ; i<a.size() ; ++i){
            if(a[i]!=b[i]) return lcp;
            lcp+=a[i];
        }
        return lcp;
    }
};
////////////////////////////////////////////////
class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        return divideAndConquer(str);
    }
    string lcp(string s1,string s2){
        string s = "";
        int minL = (s1.size()<s2.size()) ? s1.size() : s2.size();
        for(int i=0 ; i<minL ; ++i){
            if(s1[i]!=s2[i]) return s;
            s+=s1[i];
        }
        return s;
    }
    string divideAndConquer(vector<string>&s){
        int n=s.size();
        if(n==0) return "";
        if(n==1) return s[0];
        auto start = s.begin();
        auto end = s.end();
        auto middle = s.begin() + n/2;
        // using divide and conquer to divide the set of strings in two groups and finally comparing both string to find the longest common prefix
        vector<string> left(start,middle);
        vector<string> right(middle,end);
        
        string lstring = divideAndConquer(left);
        string rstring = divideAndConquer(right);
        
        return lcp(lstring,rstring);
    }
};
////////////////////////////////////////////////
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
       string ans = "";
        if(str.size()==0) return ans;
        string ss = str[0];
        // comparing first string with all, using vertical scan i.e. matching first character, then second and so on
        for(int i=0 ; i<ss.size() ; ++i){
            bool flag=0;
            for(int j=1 ; j<str.size() ; ++j){
                if(ss[i]!=str[j][i]){
                    flag=1;
                    break;
                }
            }
            if(!flag) ans+=ss[i];
            else return ans;
        }
        return ans;
    }
};
