class Solution {
public:
    bool isPalindrome(int x) {
       long long y=x;
       long long ans=0;
       while(y>0)
       {
        int a=y%10;
        ans=ans*10+a;
        y=y/10;
       } 
       return ans==x;
    }
};