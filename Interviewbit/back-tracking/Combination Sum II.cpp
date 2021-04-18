void reccu(vector<int> &A, int B,vector<int> &ds,vector<vector<int>> &result,int index)
{
    
    if(B==0)
    {
        result.push_back(ds);
    }
    
    for(int i=index;i<A.size();i++)
    {
        if(A[i]>B)
        {
            break;
        }
        
        ds.push_back(A[i]);
        reccu(A,B-A[i],ds,result,i+1);
        ds.pop_back();
        
    }
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<vector<int>>result;
    vector<int> ds;
    int index=0;
    sort(A.begin(),A.end());
    reccu(A,B,ds,result,index);
    
    sort(result.begin(), result.end());
    result.erase( unique( result.begin(), result.end() ), result.end() );
    
    return result;
    
}
