//Two Pointer Approach

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for(int c=0;c<nums.size();c++)
        {
            if(nums[c] != val)
            {
                nums[count]=nums[c];
                count++;
            }
           
        }
        return count;
        
    }
};

//TC - O(n)
//SC - O(1)

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        nums.erase(remove(nums.begin(),nums.end(),val),nums.end());
        return nums.size();
        
    }
};

//TC - O(n)
//SC - O(1)

//Same but compact
