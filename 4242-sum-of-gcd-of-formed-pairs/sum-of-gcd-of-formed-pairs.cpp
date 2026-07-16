class Solution {
private:
    int gcd(int a, int b) {
    while (b) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
public:
    long long gcdSum(vector<int>& nums) {
        vector<int>mx;
        int max = -1;
        for(int i=0;i<nums.size();i++){
            if(nums[i] > max){
                max = nums[i];
            }
            mx.emplace_back(max);
        }

        vector<int>prefixGcd;
        for(int i=0;i<nums.size();i++){
            prefixGcd.emplace_back(gcd(nums[i],mx[i]));
        }

        sort(prefixGcd.begin(),prefixGcd.end());

        long long sum = 0;

        for(int i=0,j=nums.size()-1;i<j;i++,j--){
            sum += gcd(prefixGcd[i],prefixGcd[j]);
        }
        return sum;
    }
};