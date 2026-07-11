class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0)return "";

        sort(strs.begin(),strs.end());

        string first = strs[0];
        string last = strs[strs.size()-1];
        string prefix = "";
        int i=0,j=0;
        
        while(i<first.size() && j<last.size()){
            if(first[i] == last[j]){
                prefix += first[i];
                i++,j++;
            }else{
                break;
            }
        }

        return prefix;
    }
};