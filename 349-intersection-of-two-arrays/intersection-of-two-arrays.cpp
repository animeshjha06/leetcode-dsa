class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> hash (1001,0);
        int i = 0, j =0;

        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i] == nums2[j]){
                hash[nums1[i]]++;
                i++;j++;
            }else if(nums1[i] > nums2[j]){
                j++;
            }else{
                i++;
            }
        }

        vector<int>intersected_array;

        for(int i =0 ;i<1001;i++){
            if(hash[i] > 0){
                intersected_array.emplace_back(i);
            }
        }

        return intersected_array;
    }
};