class Solution {
public:
    bool judgeCircle(string moves) {
        int cnt1 = 0,cnt2 = 0;

        for(int i = 0;i<moves.length();i++){
            if(moves[i] == 'R' )cnt1++;
            if(moves[i] == 'L') cnt1--;
            if(moves[i] == 'U')cnt2++;
            if(moves[i] == 'D')cnt2--;
        }
        if(cnt1 == 0 && cnt2 == 0) return true;

        return false;
    }
};