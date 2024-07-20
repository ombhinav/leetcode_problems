class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int p = rowSum.size();
        int q = colSum.size();
        vector<vector<int>> answer(p, vector<int>(q));
        int i = 0, j = 0;
        
        while (i < p && j < q) {
            answer[i][j] = min(rowSum[i], colSum[j]);
            rowSum[i] -= answer[i][j];
            colSum[j] -= answer[i][j];
            if (rowSum[i] == 0)
                i++;
            if (colSum[j] == 0)
                j++;
        }
        
        return answer;
    }
};
