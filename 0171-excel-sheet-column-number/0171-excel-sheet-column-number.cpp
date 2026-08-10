class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        int value = 0;
        int ans = 0;

        for(int i = 0;i< columnTitle.length();i++){
           char ch = columnTitle[i];

           value = ch - 'A' + 1;
           ans = ans*26 + value;
            
        }

        return ans;

    }
};