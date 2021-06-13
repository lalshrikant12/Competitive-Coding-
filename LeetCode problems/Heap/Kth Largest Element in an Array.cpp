//using sorting methodclass Solution 
{
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return nums[nums.begin(),n-k];
        
    }
};

//heap method this method is effecient as it gets the job done in nlogk time

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue <int, vector<int>, greater<int> > pq;
        for(int i=0;i<nums.size();i++)
        {
            pq.push(nums[i]);
        }
        int s=k;
        while(pq.size()!=k)
        {
            pq.pop();
        }
        return pq.top();
    }
};
