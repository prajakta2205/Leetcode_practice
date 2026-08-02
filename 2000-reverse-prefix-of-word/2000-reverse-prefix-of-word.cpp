class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char>st;
        
        bool flag = false;
        for(int i = 0; i<word.length(); i++){

            if(word[i] != ch) st.push(word[i]);
            
            else if(word[i] == ch) {

                flag = true;
                st.push(ch);
                break;

            }
            
        }
        if(flag == false) return word;
       
        int i = 0;
        while(! st.empty()){
           word[i] = st.top();
           st.pop();
           i++;
        }

        return word;
    }
};