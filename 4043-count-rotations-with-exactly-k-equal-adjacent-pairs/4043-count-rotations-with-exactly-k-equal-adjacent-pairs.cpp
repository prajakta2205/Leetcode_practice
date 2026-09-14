class Solution {
public:
    int countRotations(string s, int k) {
        int cnt = 0;
        int n = s.length();
        for(int i = 0;i < n ;i++){
          int score = 0;

          reverse(s.begin(),s.begin()+1);
          reverse(s.begin()+1,s.end());
          reverse(s.begin(),s.end());

            for(int j = 0;j < s.length() -1;j++){
                if(s[j] == s[j+1]){
                    score++;
                }
            }
              if(score == k)cnt++;
        }
        return cnt;
        
    }
};