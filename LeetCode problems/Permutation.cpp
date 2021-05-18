class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
      
        int index=0;
        recc(index,ans,nums);
        return ans;
        
    }
    
    void recc(int i, vector<vector<int>> &ans,vector<int> &nums)
    {
        if(i==nums.size())
        {
            ans.push_back(nums);
        }
      
        for(int j=i;j<nums.size();j++)
        {
            swap(nums[i],nums[j]);
         
            recc(i+1,ans,nums);
            swap(nums[i],nums[j]);
        }
    }
};
