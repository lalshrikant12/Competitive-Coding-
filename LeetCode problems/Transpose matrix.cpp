/*Given a 2D integer array matrix, return the transpose of matrix.

The transpose of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.



 

Example 1:

Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[1,4,7],[2,5,8],[3,6,9]]
Example 2:

Input: matrix = [[1,2,3],[4,5,6]]
Output: [[1,4],[2,5],[3,6]]
 

Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 1000
1 <= m * n <= 105
-109 <= matrix[i][j] <= 109
*/
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    
       
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int> x;
         vector<vector<int>> ans;
    
        for(int i=0;i<col;i++)
        {
            x.clear();
            for(int j=0;j<row;j++)
            {
                x.push_back(matrix[j][i]);
            }
            ans.push_back(x);
        }
        return ans;
    }
};
