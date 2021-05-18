class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>> mymap;
        string temp;
        for(int i=0;i<strs.size();i++)
        {
            temp=strs[i];
            sort(strs[i].begin(),strs[i].end());
            mymap[strs[i]].push_back(temp);
        }
        
        vector<vector<string>> result;
        for(auto itr=mymap.begin();itr!=mymap.end();itr++)
        {
            result.push_back(itr->second);
        }
        return result;
    }
};
