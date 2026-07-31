class Solution {
public:
    int minimumPushes(string word) {
        int answer = 0;
        int n = word.size();

        if(n<=8) answer = n;
        else if(n<=16) answer = 8 + (n-8)*2;
        else if(n<=24) answer = 24 + (n- 16)*3;
        else answer = 48 + (n-24)*4;

        return answer;
    }
};