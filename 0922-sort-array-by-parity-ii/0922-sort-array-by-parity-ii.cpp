class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>even;
        vector<int>odd;

        for(int i = 0;i< nums.size();i++){

            if(nums[i] % 2 == 0) even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        int m = 0,n = 0;
        for(int i = 0;i<nums.size();i++){
            if(i % 2 == 0) {
                nums[i] = even[m];
                m++;
            } 
            
         else {
                nums[i] = odd[n];
            n++;
            }
        }
        return nums;
    }
};