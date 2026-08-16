class Solution {
public:
    int characterReplacement(string s, int k) {
        int n= s.size();
        int res=0;
        int left=0;
        int freq[26];
        int maxFreq=0;
        for(int right=0; right<n; right++){
            freq[s[right] - 'A']++;
            maxFreq= max(maxFreq, freq[s[right]- 'A']);

            if((right-left+1) - maxFreq > k){
                freq[s[left] - 'A']--;
                left++;
            }
            res=max(res, right-left+1);
        }
        
    return res;
    }
};