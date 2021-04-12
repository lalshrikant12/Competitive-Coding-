void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int H=A.size();
    int W=A[0].size();
    vector<bool> row_zero(H);
    vector<bool> col_zero(W);
    
    for(int i=0;i<H;i++)
        for(int j=0;j<W;j++)
        {
            if(A[i][j]==0)
            {
                row_zero[i]=true;
                col_zero[j]=true;
            }
        }
    for(int i=0;i<H;i++)
        for(int j=0;j<W;j++)
        {
            if(row_zero[i]||col_zero[j]==true)
            {
                A[i][j]=0;
            }
        }
    
    
    
}
