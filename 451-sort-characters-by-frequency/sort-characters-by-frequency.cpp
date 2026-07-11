class Solution {
public:
    string frequencySort(string s) {
        vector<int> hash(128, 0);

        for (auto it : s) {
            hash[int(it)]++;
        }

        string ans;

        for (int i = 0; i < 128; i++) {
            int index = 0, maximum = 0;

            for (int i = 0; i< 128; i++){
                if(hash[i]>maximum){
                    maximum = hash[i];
                    index = i;
                }
            }

            if(maximum!=0){
                for(int i=0;i<maximum;i++){
                    ans += char(index);
                }
            }

            hash[index] = 0;
        }

        return ans;
    }
};