//using sorting methodclass Solution 
{
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return nums[nums.begin(),n-k];
        
    }
};
