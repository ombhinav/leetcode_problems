class Solution {
public:
    // void rotate(vector<vector<int>>& matrix) {
    //     int n = matrix.size();

    //     // transpose
    //     for (int i = 0; i < n - 1; i++) {
    //         for (int j = i + 1; j < n; j++) {
    //             swap(matrix[i][j], matrix[j][i]);
    //         }
    //     }

    //     // reverse
    //     for (int i = 0; i < n; i++) {
    //         reverse(matrix[i].begin(),matrix[i].end());
    //     }
    // }
    

    //swap
    // [0][0] -> [0][0]
    // [0][1] -> [1][0]
    // [0][2] -> [2][0]
    // [1][1] -> [1][1]
    // [1][2] -> [2][1]
    // [2][2] -> [2][2]
    void rotate(vector<vector<int>> &matrix){
        int n = matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j<i){
                    continue;
                }
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};