class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int minLen=min(word1.size(),word2.size());
        string ans;
        for(int i=0;i<minLen;i++)
        {
            ans+=word1[i];
            ans+=word2[i];
        }
        ans.append(word1.begin()+minLen,word1.end());
        ans.append(word2.begin()+minLen,word2.end());
        return ans;
    }
};