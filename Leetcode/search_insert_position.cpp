class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int i;
        for(i=0 ; i<nums.size() ; ++i){
            if(target>nums[i]) continue;
            else break;
        }
        return i;

    }
};