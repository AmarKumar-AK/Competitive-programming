/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.
----------------------------------------------
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].
----------------------------------------------
Input: nums = [3,2,4], target = 6
Output: [1,2]
----------------------------------------------
Input: nums = [3,3], target = 6
Output: [0,1]
*/

class Solution {
public:
    
    vector<int> twoSum(vector<int>& nums, int target) {
        // unordered map which stores nums as key and its index as value
        unordered_map<int,int>mp;
        // ans is to store the index of solution
        vector<int>ans;
        for(int i=0 ; i<nums.size() ; ++i){
            // if, for nums[i], target-nums[i] is found then store the index of nums[i] and index of target-nums[i] and return the answer
            if(mp.find(target-nums[i])!=mp.end()){
                ans.push_back(i);
                ans.push_back(mp[target-nums[i]]);
                return ans;
            }
            // keep adding the elements in the map one by one and find whether target-nums[i] is present or not
            // one by one element is being added to map so that it need not traverse whole nums array for a given nums[i]
            mp[nums[i]] = i;
        }
        return ans;
    }
};
