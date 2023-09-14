class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
          if (strs.empty()) {
        return "";
    }
    
    int minLen = INT_MAX;
    for (const std::string& str : strs) {
        minLen = std::min(minLen, static_cast<int>(str.length()));
    }
    
    string commonPrefix = "";
    for (int i = 0; i < minLen; ++i) {
        char currentChar = strs[0][i];
        for (int j = 1; j < strs.size(); ++j) {
            if (strs[j][i] != currentChar) {
                return commonPrefix;
            }
        }
        commonPrefix += currentChar;
    }
    
    return commonPrefix;
    }
};