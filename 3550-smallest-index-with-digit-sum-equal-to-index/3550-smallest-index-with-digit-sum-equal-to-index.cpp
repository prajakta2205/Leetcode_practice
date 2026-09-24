class Solution {
public:
    int smallestIndex(vector<int>& nums) {

        int sum = -1;
        for(int i = 0;i<nums.size();i++){
            int digitSum = 0;
            int digit = nums[i];
            while(digit != 0){
              digitSum += digit % 10;
              digit /= 10;
            }
            if(digitSum == i) {
                sum = i;
                break;
            }
        }
        return sum;
    }
};