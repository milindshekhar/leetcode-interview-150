class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
         int studentArraySize=g.size();
        int cookieArraySize=s.size();
        int studentPointer=0,cookiePointer=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(studentPointer<studentArraySize && cookiePointer<cookieArraySize)
        {
            if(g[studentPointer]<=s[cookiePointer])
            {
                studentPointer++;
            }
            cookiePointer++;
        }
        return studentPointer;
    }
};