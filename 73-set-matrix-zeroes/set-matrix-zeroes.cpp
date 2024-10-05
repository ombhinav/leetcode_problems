class Solution {
public:

    //brute force

//     void setRowZero(int n,int m, int i,vector<vector<int>>&matrix){
//         for(int j=0;j<m;j++){
//             if(matrix[i][j] != 0){
//                 matrix[i][j] = -11;
//             }
//         }
//     }

//     void setColZero(int m,int n, int j,vector<vector<int>>&matrix){
//         for(int i=0;i<n;i++){
//             if(matrix[i][j] != 0){
//                 matrix[i][j] = -11;
//             }
//         }
//     }
//     void setZeroes(vector<vector<int>>& matrix) {
//         //brute force


//         int n = matrix.size();
//         int m = matrix[0].size();
//         for(int i = 0;i<n;i++){
//             for(int j = 0; j<m;j++){
//                 if(matrix[i][j] == 0){
//                     setRowZero(n,m,i,matrix);
//                     setColZero(m,n,j,matrix);
//                 }
//             }
//         }

//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(matrix[i][j] == -11){
//                     matrix[i][j] = 0;
//                 }
//             }
//         }
//     }  

// };  

    // void setZeroes(vector<vector<int>>& matrix) {
        //better

        // int n = matrix.size();
        // int m = matrix[0].size();
        // int row[n];
        // int col[m];
        // for(int i=0;i<n;i++){
        //     row[i]= 0;
        // }
        // for(int j=0;j<m;j++){
        //     col[j]= 0;
        // }
        
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         if(matrix[i][j] == 0){
        //             row[i]=1;
        //             col[j]=1;
        //         }
        //     }
        // }


        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < m; j++) {
        //         if (row[i] || col[j]) {
        //             matrix[i][j] = 0;
        //         }
        //     }
        // }


        //optimal 
        // int n = matrix.size();
        // int m = matrix[0].size();
        // int col0 = 1;

        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         if(matrix[i][j] == 0){
        //             matrix[i][0] = 0;
        //             if(j!=0){
        //                 matrix[0][j] = 0;
        //             }
        //             else{
        //                 col0 = 0;
        //             }
        //         }
        //     }
        // }

        // for(int i=1;i<n;i++){
        //     for(int j=1;j<m;j++){
        //         if(matrix[i][j] != 0){
        //             if(matrix[i][0] == 0 || matrix[0][j] == 0){
        //                 matrix[i][j] = 0;
        //             }
        //         }
        //     }
        // }

        // if(matrix[0][0] == 0){
        //     for(int j=0;j<m;j++){
        //         matrix[0][j] = 0;
        //     }
        // }
        // if(col0 == 0){
        //     for(int i=0;i<n;i++){
        //         matrix[i][0] = 0;
        //     }
        // }
    
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int col0 = 1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    if(j!= 0){
                        matrix[0][j] = 0;
                    }
                    else{
                        col0 = 0;
                    }
                }
            }
        }

        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                // if(matrix[i][j] != 0){

                    if(matrix[i][0] == 0 || matrix[0][j] == 0){
                        matrix[i][j] = 0;
                    }
                // }
            }
        }

        if(matrix[0][0] == 0){
            for(int j=0;j<m;j++){
                matrix[0][j] = 0;
            }
        }
        
        if(col0 == 0){
            for(int i=0;i<n;i++){
                matrix[i][0] = 0;
            }
        }
        

        return;

    }

};