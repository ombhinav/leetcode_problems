class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> st;
        for(auto it: logs){
            if(it == "./"){
                continue;
            }
            if(it == "../"){
                if (!st.empty()) {
                    st.pop();
                }
            }
            else{
                st.push(it);
            }
        }
        return st.size();
    }
};