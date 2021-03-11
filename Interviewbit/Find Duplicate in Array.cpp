int Solution::repeatedNumber(const vector<int> &A) {
    vector<int> B;
    vector<int> result;
    B = A; // copy elements of constant array to normal array to change values 
    for(int i=0;i<B.size();i++)
    {
        int index=abs(B[i])-1;
      
        if(B[index]<0)
        {
            result.push_back(index+1);
        }
        
        B[index]=-B[index];
    }
    
    if(result.size()==0)
    {
        return -1;
    }
    else
    return (result[0]);
    
}
