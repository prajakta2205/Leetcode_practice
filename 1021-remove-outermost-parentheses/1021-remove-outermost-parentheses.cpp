class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> s1;
        string ans;

        for(int i = 0; i < s.length(); i++) {
            char ch = s[i];

            if(ch == '(') {
                if(!s1.empty()) {
                    ans.push_back(ch);
                }

                s1.push(ch);
            }
            else {
                s1.pop();

                if(!s1.empty()) {
                    ans.push_back(ch);
                }
            }
        }

        return ans;
    }
};