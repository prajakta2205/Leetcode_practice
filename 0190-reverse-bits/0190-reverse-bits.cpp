class Solution {
public:
    int reverseBits(int n) {
         int ans = 0;  // ans = 0000000....32times
         
         for(int i = 0;i<32;i++){
            int lastBit = n & 1;   //storing last bit

            n >>= 1; // removing the last bit

            ans <<=1;  // making space by shifting bits 1 place left
            ans = ans | lastBit;
         }
         return ans;
    }
};