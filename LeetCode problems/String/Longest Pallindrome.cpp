class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> counts;
        for(char c: s)
        {
            counts[c]++;
        }
        
        int result=0;
        bool foundodd=false;
        for(auto it: counts)
        {
            if(it.second%2==0)
            {
                result=result+it.second;
                
            }
            else
            {
                foundodd=true;
                result=result+it.second-1;
            }
        }
        if(foundodd==true)
        {
            result=result+1;
        }
        return result;
        
    }
};
