class Solution {
public:
    bool isPalindrome(string s) {
        string afterRemovingEverything = "";
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>=97 && s[i]<=122) || (s[i]>=65 && s[i]<=90) || (s[i]>=48 && s[i]<=57))
            {
                if(s[i]>=48 && s[i]<=57)
                {
                       afterRemovingEverything += s[i];
                }
                else
                {
                     afterRemovingEverything += tolower(s[i]);
                }
               
            }

        }
        int left = 0,right = afterRemovingEverything.size()-1;
        while(left < right)
        {
            if(afterRemovingEverything[left]!=afterRemovingEverything[right])
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

//TC- O(n) Two loops independent.
//SC -O(n) Extra space to store string

// Two Pointer Approach
class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.size() - 1;
        
        while (left < right) {
    
            while (left < right && !isalnum(s[left])) {
                left++;
            }
      
            while (left < right && !isalnum(s[right])) {
                right--;
            }

            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};
//TC- O(n)
//SC -O(1) 


