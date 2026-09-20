class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;
        vector<int>index;

        for(int i=0;i<s.size();i++){
            index.emplace_back(26 - (int(s[i])-97));
        }

        for(int i=0;i<index.size();i++){
            ans += index[i]*(i+1);
        }

        return ans;
    }
};