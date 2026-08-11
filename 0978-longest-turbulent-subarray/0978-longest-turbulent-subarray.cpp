class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int n = arr.size();

        if (n == 1)
            return 1;

        int left = 0;
        int ans = 1;

        for (int right = 1; right < n; right++) {

            if (arr[right] == arr[right - 1]) {
                left = right;
            }
            else if (right == 1 ||
                     (arr[right] > arr[right - 1]) !=
                     (arr[right - 1] > arr[right - 2])) {

                ans = max(ans, right - left + 1);
            }
            else {
                left = right - 1;
            }
        }

        return ans;
    }
};