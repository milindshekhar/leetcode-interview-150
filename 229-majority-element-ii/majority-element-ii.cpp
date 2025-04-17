class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count1=0,count2=0,ele1=INT_MIN,ele2=INT_MIN;
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(count1==0 && ele2!=nums[i])
            {
                count1=1;
                ele1=nums[i];
            }
            else if(count2==0 && ele1!=nums[i])
            {
                count2=1;
                ele2=nums[i];
            }
            else if(ele1 == nums[i])
            {
                count1++;
            }
            else if(ele2==nums[i])
            {
                count2++;
            }
            else
            {
                count1--;
                count2--;
            }
        }
        count1=0;
        count2=0;
        for(int i=0;i<n;i++)
        {
            if(ele1==nums[i])
            {
                count1++;
            }
            if(ele2==nums[i])
            {
                count2++;
            }
        }
      int mini=n/3+1;
      if(count1>=mini)
      {
        ans.push_back(ele1);
      }
      if(count2>=mini && ele1!=ele2)
      {
        ans.push_back(ele2);
      }
      return ans;
    }
};