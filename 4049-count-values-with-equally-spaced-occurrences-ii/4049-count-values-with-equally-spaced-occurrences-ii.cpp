class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>>mpp;
        for(int i = 0;i<nums.size();i++){
            mpp[nums[i]].push_back(i);
        }

     int cnt = 0;
        for(auto it:mpp){
            if(it.second.size() >= 3){

                bool ok = true;
              
              for(int i = 0;i < it.second.size()-2;i++){
                if( it.second[i+1] - it.second[i] != it.second[i+2] - it.second[i+1] ){
                    ok = false;
                    break;
                }
              }
              if(ok) cnt++;

            }
        }
        return cnt;
    }
};