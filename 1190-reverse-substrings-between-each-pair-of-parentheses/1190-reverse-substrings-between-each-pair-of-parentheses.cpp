class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> st;
        string ans;

        int n = s.length();

        for(int i = 0; i < n; i++) {

            if(s[i] != ')') {
                st.push(s[i]);
            }
            else {
                ans = "";

                while(!st.empty() && st.top() != '(') {
                    ans.push_back(st.top());
                    st.pop();
                }

                st.pop(); // remove '('

                for(auto it : ans) {
                    st.push(it);
                }
            }
        }

        ans = "";

        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};