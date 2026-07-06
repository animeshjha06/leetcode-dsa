class Solution {
public:
    int reverse(int x) {
        
        if (x <= INT_MIN || x > INT_MAX) {
            return 0;
        }
        vector<int>digits;
        int sign = 0;
        if(x<0){
            sign =1;
            x = -x;
        }
        while(x>0){
            int temp  = x%10;
            digits.push_back(temp);
            x = x/10;
        }
        for(int i=0,j=digits.size()-1;i<j;i++,j--){
            int temp = digits[i];
            digits[i] = digits[j];
            digits[j] = temp;
        }
        long num = 0;
        for(int i=0;i<digits.size();i++){
            num = num + long(digits[i]*pow(10,i));
        }
        if (num < INT_MIN || num > INT_MAX) {
            return 0;
        }
        if(sign == 1)num = -num;
        return int(num);
    }
};