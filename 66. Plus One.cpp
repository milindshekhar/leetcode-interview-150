class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for(int i=n-1;i>=0;i--)
        {
            if(digits[i]<9)
            {
                digits[i]++;
                return digits;
            }
            digits[i]=0;
        }
         digits.insert(digits.begin(), 1);
    return digits;
    }
};

//TC - O(n)
//SC - O(1)


//The solution below leads to integer overflow
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        long long number = 0;
        for(int i=0;i<digits.size();i++)
        {
            number = number * 10 + digits[i];
        }
        number +=1;
        vector<int> retVal;
        while(number > 0)
        {
            retVal.insert(retVal.begin(),number%10);
            number=number/10;
        }
        return retVal;
    }
};
//TC - O(n)
//SC - O(n)

