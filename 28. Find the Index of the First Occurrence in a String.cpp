class Solution {
public:
    int strStr(string haystack, string needle) {
        int firstOcc=-1;
        for(int i=0;i<haystack.size();i++)
        {
            if(haystack.substr(i,needle.size()) == needle)
            {
                firstOcc = i;
                break;
            }
        }
        return firstOcc;
        
    }
};

//TC - O(n)
//SC - O(n)
