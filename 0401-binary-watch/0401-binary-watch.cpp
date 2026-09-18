class Solution {
public:
    
    int countOnes(int n) {
    int count = 0;

    while(n > 0) {
        if(n % 2 == 1) {
            count++;
        }

        n = n / 2;
    }

    return count;
}
    int cnt = 0;
    vector<string> readBinaryWatch(int turnedOn) {
        
        vector<string>ans;
        
        for(int hours = 0; hours < 12; hours ++){
            for(int minutes = 0; minutes < 60 ;minutes ++){
              int total = countOnes(hours) + countOnes(minutes);

                 if(total == turnedOn) {
                     if(minutes < 10){
                         ans.push_back(to_string(hours) + ":0" + to_string(minutes));
                     }
                     else  ans.push_back(to_string(hours) + ":" + to_string(minutes));

                 }
            }
        }
        return ans;
    }
};