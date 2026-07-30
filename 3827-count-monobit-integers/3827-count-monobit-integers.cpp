class Solution {
public:
    
    int countMonobit(int n) {
        
        if( n == 0) return 1;

        int monobit = 0;

         for(int i = 0;i<=n;i++){

            int num = i;
            int cnt1 = 0,cnt0 = 0;

              while(num > 0){
                   if(num % 2 == 1) cnt1 ++;
                   else cnt0 ++;

                 num /= 2; 
            }

           if (cnt0 == 0 || cnt1 == 0)
                monobit++;

        }

        return monobit;
    }
};