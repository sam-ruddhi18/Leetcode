class Solution {
public:
    vector<int> getRow(int rowIndex) {
       vector<vector<int>> arr;
        int curr=0;
        for(int i=0; i<=rowIndex; i++){
            vector<int> ans(i+1);
            for(int j=0; j<i+1; j++){
                
                if(j==0 || j== i){
                    ans[j]=1;                    
                }
                else{
                    ans[j]= arr[i-1][j-1] + arr[i-1][j];
                }
            }
            arr.push_back(ans);
        }
        return arr[rowIndex];
    }
};


