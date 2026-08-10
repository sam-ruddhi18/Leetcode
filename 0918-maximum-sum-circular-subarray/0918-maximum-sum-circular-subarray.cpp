class Solution {
public:
    int maxSubarraySumCircular(vector<int>& arr) {
        int CurrSum= arr[0];
        int res= arr[0];
        int minSum= arr[0];
        int minRes= arr[0];
        int total=arr[0];
      for(int i=1; i < arr.size() ; i++){
        CurrSum= max(arr[i], CurrSum+arr[i]);
        res= max(CurrSum, res);
        minSum= min(arr[i], minSum+arr[i]);
        minRes= min(minSum, minRes);

        total+= arr[i];
      }  
      if(CurrSum<0){
        return res ;
      }
      else{
        return max(total - minRes, res); 
      }
    }
};