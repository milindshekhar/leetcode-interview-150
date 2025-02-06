class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        while(j < t.size())
        {
            if(i < s.size() && s[i] == t[j])
            {
                i++;
            }
            j++;
        }
        return i == s.size();
    }
};

//TC - O(n) t the length of string
//SC - O(1)
//Two Pointer Approach
