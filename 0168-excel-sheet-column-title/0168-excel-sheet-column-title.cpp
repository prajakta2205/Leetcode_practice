class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s;

        while (columnNumber > 0) {
            columnNumber--;

            char ch = 'A' + (columnNumber % 26);
            s.push_back(ch);

            columnNumber /= 26;
        }

        reverse(s.begin(), s.end());

        return s;
    }
};