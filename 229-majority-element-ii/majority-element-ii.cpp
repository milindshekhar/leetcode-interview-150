class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> majorityElement;
        for(int i = 0;i < n;i++)
        {
            int count = 0;
            for(int j = 0;j < n;j++)
            {
                if(nums[i] == nums[j])
                {
                    count++;
                }
            }
            if(count > (n/3))
            {
               if(std::count(majorityElement.begin(),majorityElement.end(),nums[i]) ==0)
               {
                majorityElement.push_back(nums[i]);
               }
            }
        }
        return majorityElement;
    }
};