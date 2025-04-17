class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int element;
        for(int num:nums)
        {
            if(count==0)
            {
                count=1;
                element=num;
            }
            else if(element == num)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return element;
    }
};