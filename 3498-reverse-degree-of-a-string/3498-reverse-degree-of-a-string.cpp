class Solution {
public:
    int reverseDegree(string s) {
        
        int ans = 0;

        for(int i = 0;i<s.length();i++){
            int val = 0;
           char ch = s[i];

            val = (  'z' - ch + 1 ) * (i+1);
            ans += val;

        }

        return ans;
    }
};