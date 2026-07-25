class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0;
        int maxi = INT_MIN;
        vector<int>ans;

        ans.push_back(0);

        for(int i = 0;i<gain.size();i++){
            sum += gain[i];
            ans.push_back(sum);

            maxi = max(maxi,sum);
        }
        if(maxi < 0) return 0;

        return maxi;
    }
};