class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> triangle;
        
        if(numRows==0)
            return tirangle;
        
        vector<int> firstrow;
        firstrow.push_back(1);
        triangle.push_back(firstrow);
        
        
        for(int i=1;i<numRows;i++)
        {
            vector<int> prev_row=triangle.at(i-1);
            vector<int>row;
            row.push_back(1);
            
            for(int j=1;j<i;j++)
            {
                row.push_back(prev_row.at(j-1)+prev_row.at(j));
            }
            row.push_back(1);
            triangle.push_back(row);
            
        }
        return triangle;
    }
};
