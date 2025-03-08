class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> charCount;
    
    // Count occurrences of each character in magazine
    for (char c : magazine) {
        charCount[c]++;
    }
    
    // Check if ransomNote can be constructed
    for (char c : ransomNote) {
        if (charCount[c] > 0) {
            charCount[c]--;  // Use a character
        } else {
            return false;  // Not enough characters
        }
    }
    
    return true;
    }
};