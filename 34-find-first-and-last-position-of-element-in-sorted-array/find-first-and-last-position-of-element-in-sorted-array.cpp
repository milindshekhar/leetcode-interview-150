class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start1=0,end1=nums.size()-1;
        int first=-1;
        while(start1<=end1)
        {
            int mid=start1+(end1-start1)/2;
            if(nums[mid] == target)
            {
                first=mid;
                end1=mid-1;
            }
            else if(nums[mid]>target)
            {
              end1=mid-1;  
            }
            else
            {
               start1=mid+1; 
            }
        }
         int start2=0,end2=nums.size()-1;
        int last=-1;
        while(start2<=end2)
        {
            int mid=start2+(end2-start2)/2;
            if(nums[mid]== target)
            {
                last=mid;
                start2=mid+1;
            }
            else if(nums[mid]>target)
            {
                end2=mid-1;
            }
            else
            {
                start2=mid+1;
            }
        }
        return {first,last};
    }
};