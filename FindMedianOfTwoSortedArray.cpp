class Solution {
public:
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        double res = 0;
        
        int x = nums1.size();
        int y = nums2.size();
        
        if( x > y){
           return findMedianSortedArrays(nums2,nums1);
        }
        
        int low = 0;
        int high = x;
        
        while(low <= high){
            
            int parx = (low + high)/2;
            int pary = ((x + y + 1)/2) - parx;
              
            
            int XLeftMax = (parx == 0)? INT_MIN : nums1[parx - 1];
          
            int XRightMin = (parx == x)? INT_MAX: nums1[parx];
          
            int YLeftMax = (pary == 0)? INT_MIN: nums2[pary - 1];  
          
            int YRightMin = (pary == y)?INT_MAX: nums2[pary];  

             
            if(XLeftMax <= YRightMin && YLeftMax <= XRightMin){
                
                if((x+y) % 2 == 0){
                    res =  (double)(max(XLeftMax, YLeftMax) +min(XRightMin,YRightMin))/2;
                   
                }
                else{
                  res = max(XLeftMax, YLeftMax);
                }
                
                break;
            }
            else{
                if(XLeftMax > YRightMin){
                    high = parx - 1;
                }
                else{
                    low = parx + 1;
                }
                
            }
            
        }
        
        return res;    
        
    }
};
