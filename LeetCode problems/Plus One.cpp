class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1;i>=0;i--)
        {
            if(digits[i]<9)
            {
                digits[i]++;
                return digits;
                break;
                
            }
            
            digits[i]=0;
            
        }
        vector<int> result;
        int n=digits.size()+1;
        int i=0;
        while(i<n)
        {
            result.push_back(0);
            i++;
        }
        result[0]=1;
        return result;
        
    }
};
