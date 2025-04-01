class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> mpp;
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
        for(auto it:mpp)
        {
            if(it.second > (n/3))
            {
                ans.push_back(it.first);
            }
        }
        return ans;
        
    }
};