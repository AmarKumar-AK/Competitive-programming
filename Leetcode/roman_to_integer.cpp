/*
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.
Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:
I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.
-------------------------------------------
Input: s = "III"
Output: 3
-------------------------------------------
Input: s = "IV"
Output: 4
-------------------------------------------
Input: s = "IX"
Output: 9
-------------------------------------------
Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.
-------------------------------------------
Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
*/
class Solution {
public:
    int romanToInt(string s) {
        // unordered map will store roman number as key and its converted decimal as value
        unordered_map<char,int>mp;
        mp.insert({'I',1});
        mp.insert({'V',5});
        mp.insert({'X',10});
        mp.insert({'L',50});
        mp.insert({'C',100});
        mp.insert({'D',500});
        mp.insert({'M',1000});
        int ans = 0;
        for(int i=0 ; i<s.size()-1 ; ++i){
            // if previous roman number is less than the next one then it should be subtracted from the ans
//             if(mp[s[i]] < mp[s[i+1]]) ans+=-mp[s[i]];
//             else ans+=mp[s[i]];
            ans+=(mp[s[i]] < mp[s[i+1]]) ? -mp[s[i]] : mp[s[i]];
        }
        // last digit of roman number was only used for comparing, it was not added to the ans, so it is being added
        ans+=mp[s[s.size()-1]];
        return ans;
    }
};
/////////////////////////////////////////////
class Solution {
public:
    int romanToInt(string s) {
        vector<int>v;
        //storing value of every roman number in a vector array
        for(int i=0 ; i<s.size() ; ++i){
            switch(s[i]){
                case 'I' : v.push_back(1); break;
                case 'V' : v.push_back(5); break;
                case 'X' : v.push_back(10); break;
                case 'L' : v.push_back(50); break;
                case 'C' : v.push_back(100); break;
                case 'D' : v.push_back(500); break;
                case 'M' : v.push_back(1000); break;
            }
        }
        int sum=0;
        for(int i=0 ; i<s.size()-1 ; ++i){
            // if previous value is less than the next one then it should be subtracted from the ans
            if(v[i]<v[i+1]){
                v[i] = -v[i];
            }
            sum+=v[i];
        }
        // value of last roman number was only used for comparing, it was not added to the ans, so it is being added
        sum+=v[s.size()-1];
        return sum;
    }
};

