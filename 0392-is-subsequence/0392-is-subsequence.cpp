class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0; // pointer for s
        int j = 0; // pointer for t

        while (i < s.length() && j < t.length()) {
            if (s[i] == t[j]) {
                i++;   // matched character in s
            }
            j++;       // always move in t
        }

        return i == s.length();
    }
};