class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s == "")return true;
        int j = 0;
        for(int i=0;i<t.size();i++){
            if(t[i] == s[j]){
                if(j == s.size()-1)return true;
                j++;
            }
        }

        return false;
    }
};