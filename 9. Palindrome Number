class Solution {
public:
    bool isPalindrome(long long x) {
       long long y = x;
       long long ans = 0;
       while(x > 0)
       {
        long long a = x % 10;
        ans = ans * 10 + a;
        x = x / 10;

       } 
       if(y == ans)
       {
        return true;
       }
       else
       {
        return false;
       }
    }
};

//TC-O(Log(x)) where log x is digits of the number.
//SC-O(1) Because no extra space is used.

// Using string

class Solution {
public:
    bool isPalindrome(long long x) {
        string checkNum =to_string(x);
        string numberInput = to_string(x);
        reverse(numberInput.begin(),numberInput.end());
        return checkNum == numberInput;
    }
};

//TC-O(Log(x)) where log x is digits of the number.
//SC-O(Log(x)) Because we are storing strings in extra space.


class Solution {
public:
    bool isPalindrome(long long x) {
        string checkNum =to_string(x);
        if(x < 0)
        {
            return false;
        }
        if(x>=1 && x<=9)
        {
            return true;
        }
        long long left=0;
        long long right=checkNum.size()-1;
        while(left < right)
        {
            if(checkNum[left]!=checkNum[right])
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

//TC-O(Log(x)) where log x is digits of the number.
//SC-O(Log(x)) Because we are storing strings in extra space.
