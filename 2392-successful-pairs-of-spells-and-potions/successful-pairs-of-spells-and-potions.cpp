class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans;
        sort(potions.begin(),potions.end());
        for(int i=0;i<spells.size();i++)
        {
            ans.push_back(countPair(spells[i],potions,success));
        }
        return ans;
        
    }
    int countPair(int spells,vector<int> &potions,long long success)
    {
        long long start=0,end=potions.size()-1;
        int index=potions.size();
        while(start<=end)
        {
            long long mid=start+(end-start)/2;
            if((long long)spells*potions[mid]>=success)
            {
                index=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return potions.size()-index;
    }
};