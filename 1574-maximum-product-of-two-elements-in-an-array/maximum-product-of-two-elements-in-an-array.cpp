class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // return (nums[nums.size()-1]-1) * (nums[nums.size()-2]-1); 

        int n = 1,m= 1;

        for(auto it : nums){
            if(it > n ){
                m = n;
                n = it;
            }else if(it > m){
                m = it;
            }
        }

        return (m-1)*(n-1);

    }
};