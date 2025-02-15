class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(i!=j)
                {
                    if(nums[i]+nums[j] == target)
                    {
                        return {i,j};
                    }
                }
            }
        }
        return {};
    }
};

//TC - O(n^2)
//SC - O(1)


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            int moreNeeded = target-nums[i];
            if(mpp.find(moreNeeded) != mpp.end())
            {
                return {mpp[moreNeeded],i};
            }
            mpp[nums[i]] = i;
        }
    return {-1,-1};
        
    }
};

//TC - O(n) Only 1 iteration.O(1) from finding from hashmap.Worst case scenario Rare takes O(n^2). So to fix that we can use map instead of unordered map.
//SC - O(n)
