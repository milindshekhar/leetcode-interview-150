class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int i = s.size() - 1;
        while(i>=0 && s[i] == ' ')
        {
            i--;
        }
        while(i>=0 && s[i]!= ' ')
        {
            length++;
            i--;
        }
        return length;
    }
};

//TC - O(n) where n is the length of the string
//SC - O(1)

class Solution {
public:
    int lengthOfLastWord(string s) {
        s.erase(s.find_last_not_of(' ') + 1);
        int index = -1;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]== ' ')
            {
                index = i;
                break;
            }
        }
        return s.substr(index+1).size();
    }
};

//TC - O(n)
//SC - O(n) due to substr
