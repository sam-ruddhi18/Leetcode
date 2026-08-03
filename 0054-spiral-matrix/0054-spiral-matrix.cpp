class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m= matrix.size();
        int n= matrix[0].size();
        int srow=0,scol=0,erow= m-1, ecol=n-1;
        vector<int> ans;
        while(srow<=erow && scol<=ecol){
            for(int i=scol; i<=ecol; i++){
                ans.push_back(matrix[srow][i]);
            }

            for(int j=srow+1; j<=erow; j++){
                
                ans.push_back(matrix[j][ecol]);
            }

            for(int k=ecol-1; k>=scol; k-- ){
                if(srow==erow){
                    break;
                }
                ans.push_back(matrix[erow][k]);
            }

            for(int l=erow-1; l>=srow+1; l--){
                if(scol==ecol){
                    break;
                }
                ans.push_back(matrix[l][scol]);
            }

            srow++; scol++; erow--; ecol--;
        }
        return ans;
    }
};