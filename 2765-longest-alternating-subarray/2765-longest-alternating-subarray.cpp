class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;

        for (int i = 0; i < n - 1; i++) {

            // A valid alternating subarray MUST start with +1
            if (nums[i + 1] - nums[i] != 1)
                continue;

            int len = 2;

            for (int j = i + 2; j < n; j++) {

                int diff = nums[j] - nums[j - 1];

                // Expected: -1, +1, -1, +1...
                if (diff == (len % 2 == 0 ? -1 : 1)) {
                    len++;
                }
                else {
                    break;
                }
            }

            ans = max(ans, len);
        }

        return ans;
    }
};