class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxlen=0,l=0,r=0,n=nums.size(),zeros=0;
        while(r<n)
        {
            if(nums[r]==0)
            {
                zeros++;
            }
            while(zeros>k)
            {
                if(nums[l]==0)
                {
                    zeros--;
                }
                l++;
            }
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
        
    }
};