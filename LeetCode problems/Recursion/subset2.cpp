class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> current;
        vector<vector<int>> ans;
        rec(nums,0,current,ans);
        return ans;
    }
    
    void rec(vector<int> &nums,int start,vector <int> &current, vector<vector<int>> &ans)
    {
        ans.push_back(current);
        
        
    for(int i=start;i<nums.size();i++)
    {  
      
        current.push_back(nums[i]);
        rec(nums,i+1,current,ans);
        
        current.pop_back();
    }
}};
