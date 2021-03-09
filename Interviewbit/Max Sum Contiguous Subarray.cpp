int Solution::maxSubArray(const vector<int> &A) {
    
      int maxSoFar = A[0];
    int maxEndingHere = A[0];

    
    for (int i = 1; i < A.size(); i++) 
    {
      maxEndingHere=maxEndingHere+A[i];
      maxEndingHere = max(maxEndingHere, A[i]);

    
      maxSoFar = max(maxSoFar, maxEndingHere);  
    }

    return maxSoFar;
}
