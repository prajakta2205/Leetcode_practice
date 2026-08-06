class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());

        int fivePercent = arr.size() * 0.05;

        int sum = 0 ,cnt = 0;
        for(int i = fivePercent;i <arr.size() - fivePercent;i++ ){
            sum += arr[i];
            cnt++;
        }
        
        return (double)sum/cnt;
    }
};