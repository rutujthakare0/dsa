class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=1;i<=nums.size();i++){
            if(mp[target-nums[i-1]])return {mp[target-nums[i-1]]-1,i-1};
            else mp[nums[i-1]]=i;
        }
        return {0,0};
    }
};
