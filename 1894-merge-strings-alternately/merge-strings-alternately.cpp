class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int word1Length=word1.size(),word2Length=word2.size(),i=0,j=0;
        string ans;
        while(i<word1Length && j<word2Length)
        {
            ans+=word1[i];
            ans+=word2[j];
            i++;
            j++;
        }
        while(i<word1Length)
        {
            ans+=word1[i];
            i++;
        }
        while(j<word2Length)
        {
            ans+=word2[j];
            j++;
        }
        return ans;
        
    }
};