class Solution {
public:
    // vector<int>v;
    vector<int> twoSum(vector<int>& num, int target) {
        unordered_map<int, int>mp;
        vector<int>ans;
        int i=0;
        for(auto x:num){
            if(mp.find(target-x)!=mp.end()){
                ans.push_back(mp[target-x]+1);
                ans.push_back(i+1);
                return ans;
            }
            mp[num[i]]=i;
            i++;
            
        }
        return ans;
    }
};