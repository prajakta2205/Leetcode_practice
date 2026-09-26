class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {

        int n = code.size();
        vector<int> ans(n);

        if(k == 0) {
            return ans;
        }

        else if(k > 0) {

            for(int i = 0; i < n; i++) {

                int sum = 0;
                int j = (i + 1) % n;

                for(int temp = 0; temp < k; temp++) {
                    sum += code[j];
                    j = (j + 1) % n;
                }

                ans[i] = sum;
            }
        }

        else {

            k =  -k;

            for(int i = 0; i < n; i++) {

                int sum = 0;
                int j = (i - 1 + n) % n;

                for(int temp = 0; temp < k; temp++) {
                    sum += code[j];
                    j = (j - 1 + n) % n;
                }

                ans[i] = sum;
            }
        }

        return ans;
    }
};