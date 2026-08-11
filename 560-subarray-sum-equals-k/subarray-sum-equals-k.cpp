class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int prefixSum = 0,count = 0;
        unordered_map<int,int>mp;
        mp[0]++;

        for(int i=0;i<nums.size();i++){
            prefixSum += nums[i];
            int remaining = prefixSum - k;
            count += mp[remaining];
            mp[prefixSum]++;
        }

        return count;
    }
};