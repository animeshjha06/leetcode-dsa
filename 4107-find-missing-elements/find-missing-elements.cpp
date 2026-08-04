class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int max = 0,min = 1001;

        for (auto it : nums) {
            if (max < it)
                max = it;
            if(min>it)
                min = it;
        }

        vector<int> mp(max-min + 1, 0);

        for (auto it : nums) {
            mp[it - min]++;
        }
        vector<int> ans;

        for (int i = 0; i < mp.size(); ++i) {
            if (mp[i] == 0) {
                ans.emplace_back(i + min);
            }
        }

        return ans;
    }
};