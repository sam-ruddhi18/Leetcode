class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
        int n=s.size();
        int res=0;
        int left=0;
        int freq[2]={0,0};
        int maxFreq=0;
        for(int right=0; right<n; right++){
            if(s[right]=='T'){
                freq[0]++;
                maxFreq= max(freq[0], maxFreq);
            }
            else{
                freq[1]++;
                maxFreq= max(freq[1], maxFreq);
            }

            while((right-left+1)-maxFreq>k){
                if(s[left]=='T'){
                freq[0]--;
            }
            else{
                freq[1]--;
            }
            left++;
            }  
            res=max(res, right-left+1);         
        }
        return res;
    }
};