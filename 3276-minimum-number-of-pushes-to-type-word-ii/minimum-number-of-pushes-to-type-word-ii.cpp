class Solution {
public:
    int minimumPushes(string word) {
        vector<int>freq(26,0);
        int answer = 0;

        for(auto it : word){
            freq[it-'a']++;
        }

        sort(freq.rbegin(),freq.rend());
        

        for(int i =0;i<26;i++){
            if(freq[i] == 0)break;
            answer += (i/8 +1) * freq[i];
        }

        return answer;
    }
};