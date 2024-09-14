class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
        int output = 0;
        for(auto it: queries){
            for(int i=it[0];i<it[1]+1;i++){
                output = output ^ arr[i];
            }
            ans.push_back(output);
            output = 0;
        }
        return ans;
    }
};