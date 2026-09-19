class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int>st;
       
        vector<int> copy = prices;

        for(int i = prices.size()-1;i >= 0; i--){
            if(st.empty()) st.push(prices[i]);

            else if(!st.empty() && st.top() <= prices[i]){
               
                  copy[i] -= st.top();
                  st.push(prices[i]);
                }

            else {
                while(!st.empty() && st.top() > prices[i]){
                    st.pop();
                  }

                if(!st.empty()) {
                    copy[i] -= st.top();
                   }  
            st.push(prices[i]);
          } 
          
        } 
        return copy;

    }
};