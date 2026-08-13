class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> window;
        int ans=0;
        int left=0;
        for(int right=0; right< s.length(); right++){
            while(window.count(s[right])){
                window.erase(s[left]);
                left++;
            }
            window.insert(s[right]);

            ans=max((int)window.size(),ans);
        }
        return ans;
    }
};