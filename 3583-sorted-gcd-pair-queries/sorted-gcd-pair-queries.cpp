class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int max_val = 0;
        for(int x : nums)max_val = max(max_val,x);

        vector<int>divisor(max_val+1,0);
        for(int a : nums){
            for(int i=1;i*i<=a;i++){
                if(a%i == 0){
                    divisor[i]++;
                    if(i != a/i)
                        divisor[a/i]++;
                }
            }
        }

        vector<long long>gcd(max_val+1,0);
        for(int i = max_val;i>=1;i--){
            long long pairs = 1LL * divisor[i] * (divisor[i]-1)/2;
            for(int j = 2*i;j<=max_val;j += i){
                pairs -= gcd[j];
            }
            gcd[i] = pairs;
        }

        vector<long long> prefix(max_val + 1, 0);
        for(int i = 1; i <= max_val; ++i) {
            prefix[i] = prefix[i-1] + gcd[i];
        }
        
        vector<int> ans;
        for(long long q : queries) {
            auto it = upper_bound(prefix.begin(), prefix.end(), q);
            ans.push_back(distance(prefix.begin(), it));
        }

        return ans;
    }
};