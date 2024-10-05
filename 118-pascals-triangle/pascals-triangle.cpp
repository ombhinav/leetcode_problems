class Solution {
public:

    // vector<int> generateRow(int row){
    //     vector<int> rowAns;
    //     rowAns.push_back(1);
    //     long long element=1;
    //     for(int col = 1; col<row; col++){
    //         element = element * (row-col);
    //         element = element / (col);
    //         rowAns.push_back(element);
    //     }

    //     return rowAns;
        
    // }

    // vector<vector<int>> generate(int numRows) {
    //     vector<vector<int>> element;
    //     for(int i =1;i<=numRows;i++){
    //         element.push_back(generateRow(i));
    //     }
    //     return element;
    // }





















    

   

    vector<int> rowes(int row){
        vector<int> output;
        output.push_back(1);
        long long element = 1;

        for(int col=1;col<row;col++){
            element = element * (row - col);
            element = element / col;
            output.push_back(element);

        }
        return output;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(rowes(i));
        }
        return ans;
    }
};