#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() <2) return nums.size();
        
        int pos=0;
        for(int i=0 ; i<nums.size() ; ++i){
            if(nums[i]>nums[pos]){
                nums[++pos] = nums[i];
            }
        }
        return pos+1;
    }
};