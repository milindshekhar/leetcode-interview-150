class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       long long maxi=LLONG_MIN;
       long long sum=0;
       for(long long i=0;i<nums.size();i++)
       {
        sum+=nums[i];
        maxi=max(maxi,sum);
        if(sum<0)
        {
            sum=0;
        }
       } 
       return maxi;
    }
};