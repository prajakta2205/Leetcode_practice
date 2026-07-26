class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        unordered_map<int, bool> mp;

    for(int i = 0; i < ranges.size(); i++)
{
    int start = ranges[i][0];
    int end = ranges[i][1];

    for(int x = start; x <= end; x++)
    {
        mp[x] = true;
    }

}
for(int i = left; i <= right; i++)
{
    if(mp[i] == false)
        return false;
}

return true;

 
}
};