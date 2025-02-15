class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            if(mpp.find(nums[i])!=mpp.end() && i-mpp[nums[i]] <= k)
            {
                return true;
            }
            mpp[nums[i]]=i;
        }
        return false;
    }
};

// TC - O(n) Full iteration of loop and O(1) in umordered map to find but worse case can be O(n) if collisons.
// SC - O(n)
