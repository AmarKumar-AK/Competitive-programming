/*
Given an integer x, return true if x is palindrome integer.
An integer is a palindrome when it reads the same backward as forward. For example, 121 is palindrome while 123 is not
---------------------------------------
Input: x = 121
Output: true
---------------------------------------
Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
---------------------------------------
Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
---------------------------------------
Input: x = -101
Output: false
*/

class Solution {
public:
    long long y=0;
    bool isPalindrome(int x) {
        // variable used for storing original value of x
        int storeX=x;
        // if x is less than zero then its palindrome never exist
        if(x<0) return false;
        else{
            while(x){
                // reversing x and storing reversed number in y
                y = y*10 + x%10;
                x/=10;
            }
            if(y==storeX) return true;
            return false;
        }
    }
};
