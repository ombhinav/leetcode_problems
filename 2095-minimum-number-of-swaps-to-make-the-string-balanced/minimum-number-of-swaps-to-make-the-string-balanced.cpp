class Solution {
public:
    int minSwaps(string s) {
        int n = s.size();
        stack<int> st;
        int unbalanced=0;
        for(auto ch: s){
            if(ch == '['){
                st.push(ch);
            }
            else{
                if(!st.empty()){
                    st.pop();
                }
                else{
                    unbalanced++;
                }
            }
        }
        //returning half as unbalanced is counting the brackets
        //but one swap would fix 2 brackets at once, so halving 
        return (unbalanced+1)/2;
    }
};