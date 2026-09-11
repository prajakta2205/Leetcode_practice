class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>arr;
        int cnt = 1;

       
        if(n%2 != 0 ){
            arr.push_back(0);
            while(cnt <= n/2){
                arr.push_back(cnt);
                arr.push_back(-cnt);
                cnt++;
            }
        }
        else{
             
            while(cnt <= n/2){
                arr.push_back(cnt);
                arr.push_back(-cnt);
                cnt++;
            }
        }
        return arr;
    }
};