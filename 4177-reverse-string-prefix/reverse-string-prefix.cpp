class Solution {
public:
    string reversePrefix(string s, int k) {
        if(k < 1)return s;

        int i = 0;
        k = k-1;
        while(i<k){
            char temp = s[i];
            s[i] = s[k];
            s[k] = temp;
            i++;k--;
        }

        return s;
    }
};