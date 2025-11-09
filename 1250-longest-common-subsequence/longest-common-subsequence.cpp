class Solution {

public:
    int helperFunc(int i,int j,string &text1,string &text2,vector<vector<int>> &dp)
    {
        if(i<0  || j<0)
        {
            return 0;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        if(text1[i] == text2[j])
        {
            return dp[i][j]= 1+helperFunc(i-1,j-1,text1,text2,dp);
        }
        return dp[i][j]=max(helperFunc(i-1,j,text1,text2,dp),helperFunc(i,j-1,text1,text2,dp));
    }
    int longestCommonSubsequence(string text1, string text2) {
        int size1=text1.size();
        int size2=text2.size();
        vector<vector<int>> dp(size1,vector<int>(size2,-1));
        return helperFunc(size1-1,size2-1,text1,text2,dp);

    }
};