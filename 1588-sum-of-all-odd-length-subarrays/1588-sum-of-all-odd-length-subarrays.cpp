class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int totalsum = 0;
        for(int i = 0;i<arr.size();i++){
            for(int j = i;j<arr.size();j++){
                int sum = 0;
                if( (j-i + 1) %2 != 0){
                    for(int k = i;k<= j;k++){
                      sum += arr[k];
                     }
                }

                totalsum += sum;
            }
        }
        return totalsum;
    }

};