class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int greedSize=g.size();
        int cookieSize=s.size();
        int left=0,right=0;
        while(left<greedSize && right<cookieSize)
        {
            if(g[left]<=s[right])
            {
                left++;
            }
            right++;
        }
        return left;
    }
};