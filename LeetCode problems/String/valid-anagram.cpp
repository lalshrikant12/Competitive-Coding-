class Solution {
public:
    bool isAnagram(string s, string t) {
        int m=s.size();
        int n=t.size();
        char first[26]={0};
        char second[26]={0};
       
        
        int i=0;
        int c=0;
        //calculate freequency of occurance of each character
        while(i<m)
        {
            first[s[c]-'a']++;
            c++;
            i++;
        }
        c=0;
        i=0;
        //calculate the freequency of occurance of each character
        while(i<n)
        {
            second[t[c]-'a']++;
            c++;
            i++;
        }
             for(int i=0;i<26;i++)
        {
            if(first[i]!=second[i])
                return false;
         }
                return true;
    }
