class Solution {
public:
    int reversePairs(vector<int>& nums){
        return mergeSort(nums, 0, nums.size()-1);
    }

    int countPairs(vector<int>& nums, int left, int mid, int right) {
        int k=mid+1;
        int count=0;
        for(int i=left; i<=mid; i++){
            while(k <= right && nums[i]> 2LL *nums[k]){
                k++;
            }

            count+= (k - (mid+1));
        }
        return count;
    }
    int mergeSort(vector<int>& arr, int left, int right){
        int count=0;
        if (left >= right)
            return 0;

        int mid = left + (right - left) / 2;
        count+= mergeSort(arr, left, mid);
        count+= mergeSort(arr, mid + 1, right);
        count+= countPairs(arr, left, mid, right);
        merge(arr, left, mid, right);
        return count;
    }
    
    void merge(vector<int>& arr, int left, int mid, int right){
        int n1= mid-left+1, n2= right-mid;
        vector<int> L(n1),R(n2);
        for(int i=0; i<n1; i++){
            L[i]=arr[left+i];
        }
        for(int j=0; j<n2; j++){
            R[j]=arr[mid+j+1];
        }

        int i=0, j=0, k=left;
        while(i<n1 && j<n2){
            if(L[i]<R[j]){
                arr[k++]=L[i++];
            }
            else{
                arr[k++]=R[j++];
            }
        }

        while(i<n1){
            arr[k++]=L[i++];
        }
        while(j<n2){
            arr[k++]=R[j++];
        }
    }
    
};