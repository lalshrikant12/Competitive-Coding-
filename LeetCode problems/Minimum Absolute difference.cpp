class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int minimum=INT_MAX;
       
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        
        for(int i=1;i<arr.size();i++)
        {
            int diff=arr[i]-arr[i-1];
            minimum=min(diff,minimum);
        }
        
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]-arr[i-1]==minimum)
            {
                vector<int>ds;
                ds.push_back(arr[i-1]);
                ds.push_back(arr[i]);
                ans.push_back(ds);
                
                
            }
        }
        return ans;
    }
};
