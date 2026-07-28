class Solution {
public:
    string smallestPalindrome(string s) {
        string half;
        int n = s.size();

        for(int i=0;i<n/2;i++){
            half += s[i]; 
        }
        
        sort(half.begin(),half.end());
        
        for(int i=0;i<n/2;i++){
            s[i] = half[i];
            s[n-1-i] = half[i];
        }
        cout<<half;
        return s;
        
    }
};