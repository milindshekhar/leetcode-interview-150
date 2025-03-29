class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxValue=0;
        for(auto& customer:accounts)
        {
            maxValue=max(maxValue,accumulate(customer.begin(),customer.end(),0));
        }
        return maxValue;
        
    }
};