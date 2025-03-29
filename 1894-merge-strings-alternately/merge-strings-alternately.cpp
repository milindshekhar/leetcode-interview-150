class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        ostringstream oss;
        int i=0,j=0;
        while(i<word1.size() || j<word2.size())
        {
            if(i<word1.size())
            {
                oss<<word1[i];
                i++;
            }
            if(j<word2.size())
            {
                oss<<word2[j];
                j++;
            }
        }
        return oss.str();
    }
};