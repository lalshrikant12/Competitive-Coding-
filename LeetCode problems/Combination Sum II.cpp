
class Solution {
public:
    
    
     void reccu(vector<int>& candidates, int target,int index,vector<vector<int>> &result,vector<int> &ds)
{
 if(target==0)
 {
     result.push_back(ds);
 }
    
    for(int i=index;i<candidates.size();i++)
    {
        if(candidates[i]>target)
        {
            break;
        }
        
        ds.push_back(candidates[i]);
        reccu(candidates,target-candidates[i],i+1,result,ds);
        ds.pop_back();
        
        
        
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        vector<vector<int>> result;
        vector<int> ds;
        int index=0;
        sort(candidates.begin(),candidates.end());
        reccu(candidates,target,index,result,ds);
        sort( result.begin(), result.end() );
        result.erase( unique( result.begin(), result.end() ), result.end() );

        
        return result;
    }
    
   
};

