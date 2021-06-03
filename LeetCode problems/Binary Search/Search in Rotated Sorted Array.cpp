class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int u=nums.size()-1;
        while(l<=u)
        {
            int mid=l+(u-l)/2;
            if(nums[mid]==target)
                return mid;
            
            else if(nums[mid]>=nums[l])
            {
                if(target<=nums[mid] && target>=nums[l])
                {u=mid-1;}
                else
                    l=mid+1;
            }
            else
            {   if(target>=nums[mid] && target<=nums[u])
                l=mid+1;
                else
                u=mid-1;
                    
            }
         }
        return -1;
        
    }
};
