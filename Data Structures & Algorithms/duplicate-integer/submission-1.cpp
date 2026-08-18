class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto it:nums)if(mp[it])return true;else mp[it]++;
        return false;
    }
};