/*
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
-------------------------------------------
Input: x = 123
Output: 321
-------------------------------------------
Input: x = -123
Output: -321
-------------------------------------------
Input: x = 120
Output: 21
-------------------------------------------
Input: x = 0
Output: 0
*/
#define maxN 2147483647
#define minN -2147483648
class Solution {
public:
    
    int reverse(int x) {
        long revx = 0;
        while(x){
            // each time a digit from LSB(least significant bit) is taken and multiplied with 10 after first iteration
            revx = revx*10 + x%10;
            x = x/10;
        }
        // checking whether reversed number lies in the integer range or not
        if(revx>maxN || revx<minN) return 0;
        return (int)revx;
    }
};
