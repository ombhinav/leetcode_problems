class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        pair<int, string> ha;
        vector<pair<int,string>> vec;
        for(int i=0;i<heights.size();i++){
            vec.push_back({heights[i],names[i]});
        }

        sort(vec.begin(), vec.end());
        vector<string> st;
        for(int i=0;i<heights.size();i++){
            st.push_back(vec[i].second);
        }
        reverse(st.begin(),st.end());
        return st;

    }
};