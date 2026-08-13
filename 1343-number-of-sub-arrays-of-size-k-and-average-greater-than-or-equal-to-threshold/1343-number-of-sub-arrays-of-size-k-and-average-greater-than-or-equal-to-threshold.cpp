class Solution {
public:
    int average(vector<int>& subArr, int k){
        int sum=0;
        for(int i=0; i<k; i++){
            sum+= subArr[i];
        }

        return sum/k;
    }
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum=0;
        int left=0;
        int count=0;
        for(int right=0; right< arr.size(); right++){
            sum+= arr[right]; 
            if(right-left+1==k){
               if(sum>=threshold*k){
                count++;
               }

               sum-= arr[left];
               left++;
            }
        }
        return count;
    }
};