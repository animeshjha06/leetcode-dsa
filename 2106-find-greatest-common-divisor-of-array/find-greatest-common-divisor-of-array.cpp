class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maximum_num = 0,minimum_num = 1001;
        int gcd = 1;

        for(auto it : nums){
            if(maximum_num < it){
                maximum_num = it;
            }
            if(minimum_num > it){
                minimum_num = it;
            }
        }

        for(int i=1;i<=minimum_num;i++){
            if(maximum_num % i == 0 && minimum_num % i == 0){
                gcd = i;
            }
        }

        return gcd;
    }
};