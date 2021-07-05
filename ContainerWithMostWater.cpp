class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size()-1;
        int maxArea = 0;
        int i =0;
        while(i < n){
            maxArea = max(maxArea, (n-i)*min(height[i],height[n]));  
          (height[i]<height[n])?i++:n--;
        }
      return maxArea;
    }
};
