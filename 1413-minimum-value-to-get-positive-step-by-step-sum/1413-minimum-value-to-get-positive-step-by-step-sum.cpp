class Solution {
public:
    int minStartValue(vector<int>& nums) {
        
        int i = 1;
        while(true){
            int sum = i;
            int flag = 0;
            for(int j = 0;j<nums.size();j++){
                sum = sum + nums[j];
                if(sum < 1){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0) return i;
            i++;
        }
        return i;
    }
};