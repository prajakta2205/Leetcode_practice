class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i = 0;
        int n = bits.size();

        while(i < n){
            if(bits[i] == 0 && i == n-1) return true;
            if(bits[i] == 1) i +=2;

            else i++;
        }
        return false;
    }
};