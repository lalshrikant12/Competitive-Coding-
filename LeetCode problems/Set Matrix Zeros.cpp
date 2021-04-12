class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
         int H=matrix.size();
        int W=matrix[0].size();
        vector<bool> Rowzero(H);
        vector<bool> Colzero(W);
        
        for(int i=0;i<H;i++)
        {
            for(int j=0;j<W;j++)
            {
                if(matrix[i][j]==0)
                {
                    Rowzero[i]=true;
                    Colzero[j]=true;
                  }
            }
        }
        
        for(int i=0;i<H;i++)
            for(int j=0;j<W;j++)
            {
                if(Rowzero[i]||Colzero[j]==true)
                {
                    matrix[i][j]=0;
                }
            }    
    }
};
