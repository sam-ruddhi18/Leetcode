class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n= height.size();
        int left=0;
        int right= n-1;
        int maxArea=0;
        int length=0;
        int breadth=1;
        while(left<right){
            length= min(height[left],height[right]);
            breadth= right-left;
            maxArea= max(maxArea,length*breadth);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
            
        }
        return maxArea;
    }
};