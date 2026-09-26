class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        int i = 0;
        string temp ;
        string ans;
        unordered_map<string, string> mp;
        for(auto it : knowledge){
            mp[it[0]] = it[1];
        }

        int n = s.length();

        while(i < n){
            if(s[i] == '('){
                i++;
                temp = "";
               while(i < n && s[i] != ')'){
                      temp += s[i];
                      i++;
                }
                
             if(mp.find(temp) != mp.end()) {
                   ans += mp[temp];
               }
            else {
                   ans += "?";
                }

                i++;
              
            }
            else {
                ans += s[i];
                i++;
            }
        }
        return ans;
    }
};