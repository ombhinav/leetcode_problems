class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        int n = pairs.size();
        sort(pairs.begin(),pairs.end(),[](const vector<int>& a, const vector<int>& b){
            return a[1]<b[1];
        });
        int cnt = 0;
        int prevEnd = INT_MIN;
        for(int i=0;i<n;i++){
            int curStart = pairs[i][0];
            int curEnd = pairs[i][1];
            if(curStart>prevEnd){
                cnt++;
                prevEnd = curEnd;
            }
        }
        return cnt;
    }
};