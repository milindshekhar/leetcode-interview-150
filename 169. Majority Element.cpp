//Boyer-Moore Voting Algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;
        for(int c:nums)
        {
            if(count == 0)
            {
                candidate  = c;
            }
            count += (c == candidate)?1:-1;

        }
        return candidate;
    }
};
//TC - O(n)
//SC - O(1)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int sizeOfArray = nums.size();
        int majorityElement = sizeOfArray / 2;
        unordered_map<int,int> numFreq;
        for(int num : nums)
        {
            numFreq[num]++;
        }
        int retVal;
        for(const auto& pair:numFreq)
        {
            if(pair.second > majorityElement)
            {
               retVal =  pair.first;
            }
        }
    return retVal;
    
    }
};

//TC - O(n)
//SC - O(n)
