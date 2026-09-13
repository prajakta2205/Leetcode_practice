class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        
        for(int r = 0; r < n; r++){
             int k = rowShift[r] % n;

              reverse(grid[r].begin(), grid[r].begin() + k);
              reverse(grid[r].begin() + k, grid[r].end());
              reverse(grid[r].begin(), grid[r].end());
        }

        for(int c = 0;c < n; c++){
            int k = colShift[c] % n;

            vector<int>temp (n);
            for(int i = 0;i<n;i++){
                temp[i] = grid[i][c];
            }

            reverse(temp.begin(),temp.begin()+k);
            reverse(temp.begin()+k,temp.end());
            reverse(temp.begin(),temp.end());

            for(int i = 0;i< n;i++){
                grid[i][c] = temp[i];
            }
        }

        return grid;
       
    }
};