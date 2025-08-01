class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int maxSize=0;
        for(int i=0;i<s.size();i++)
        {
              int hash[256]={0};
            for(int j=i;j<s.size();j++)
            {
                if(hash[s[j]]!=0)
                {
                    break;
                }
                hash[s[j]]++;
                maxSize=max(maxSize,j-i+1);

            }
        }
        return maxSize;
        
    }
};