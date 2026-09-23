class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int n = seats.size();
       sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());


        int cnt = 0;
        for(int i = 0;i< n;i++){
           
           if(students[i] < seats[i]){
              while(students[i] != seats[i]){
            
                  students[i]++;
                  cnt++;
              } 
           }

           else if(students[i] > seats[i]){
             while(students[i] != seats[i]){
                 
                  students[i]--;
                  cnt++;
              } 
           }
        }
        return cnt;
    }
};