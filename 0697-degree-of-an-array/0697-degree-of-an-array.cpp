class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
       unordered_map<int,int>mpp;
       unordered_map<int,int>first;
       unordered_map<int,int>last ;
       
       // finding frq ,first and last ourrence for every element;
       for(int i = 0;i < nums.size();i++){
        mpp[nums[i]]++;

            if(first.find(nums[i]) == first.end())
                   first[nums[i]] = i;

        last[nums[i]] = i;
       }
       
       int degree = 0;
       for(auto it:mpp){
         degree = max(degree,it.second);
       }
       
       int mini = nums.size();
       for(auto it:mpp){
            if(it.second == degree) {
                mini = min(mini,last[it.first] -first[it.first] + 1);
            }
       }
     
       return mini;
       
    }
};