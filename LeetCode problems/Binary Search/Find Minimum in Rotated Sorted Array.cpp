class Solution {
public:
    int findMin(vector<int>& nums) {
        
  
        int l=0;
        int u=nums.size()-1;
        if(nums.size()==1)
            return nums[0];
        if(nums[u]>nums[l])
            return nums[0];
        while(l<=u)
        {
            int mid=l+(u-l)/2;
            if(nums[mid]>nums[mid+1])
                return (nums[mid+1]);
            else if(nums[mid-1]>nums[mid])
            {
                return (nums[mid]);
            }
            else if(nums[l]<=nums[mid])
            {
                l=mid+1;
               
            
            }
            
            else if(nums[u]>=nums[mid])
            {
                
                u=mid-1;
            }
             
        
        }
            return -1;
        
     
    }
};
