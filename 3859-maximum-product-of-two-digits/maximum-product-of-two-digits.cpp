class Solution {
public:
    int maxProduct(int n) {
        vector<int>factor;

        while(n != 0){
            int temp = n%10;
            n = n/10;

            factor.emplace_back(temp);
        }
        
        int result= 0;

        for(int i=0;i<factor.size();i++){
            for(int j=i+1;j<factor.size();j++){
                if(factor[i] * factor[j] > result)
                    result = factor[i] * factor[j];
            }
        }

        return result;
    }
};