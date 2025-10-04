class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> lastIndex;
        int maxLen = 0;
        int left = 0;
        
        for (int right = 0; right < s.length(); ++right) {
            char c = s[right];
            if (lastIndex.count(c) && lastIndex[c] >= left) {
                left = lastIndex[c] + 1;
            }
            lastIndex[c] = right;
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
        
    }
};