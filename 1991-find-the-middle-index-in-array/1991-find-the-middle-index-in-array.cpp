class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
       int leftSum = 0,rightSum = 0;
       int total = accumulate(nums.begin(),nums.end(),0);

       for(int i =0;i<nums.size();i++){
        rightSum = total - leftSum  - nums[i];

        if(rightSum == leftSum) return i;

        leftSum += nums[i];
       }

       return -1;
    }
};