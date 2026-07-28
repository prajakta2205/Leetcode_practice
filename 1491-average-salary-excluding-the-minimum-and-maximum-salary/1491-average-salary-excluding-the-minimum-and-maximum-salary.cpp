class Solution {
public:
    double average(vector<int>& salary) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int sum = 0;
        int cnt = 0;

    for (int i = 0; i < salary.size(); i++)
    {
    sum += salary[i];
    cnt++;
    mini = min(mini, salary[i]);
    maxi = max(maxi, salary[i]);
    }

    sum = sum - maxi - mini;
    cnt -= 2;

    return (double)sum/cnt;
    }
 };