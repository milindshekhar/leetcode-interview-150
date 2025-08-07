class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
 vector<int> ans(nums.size(),-1);
     for(int i=0;i<nums.size();i++)
     {
        for(int j=i+1;j<=i+nums.size()-1;j++)
        {
            int k=j%nums.size();
            if(nums[k]>nums[i])
            {
                ans[i]=nums[k];
                break;
            }
        }
     }   
     return ans;
    }
};