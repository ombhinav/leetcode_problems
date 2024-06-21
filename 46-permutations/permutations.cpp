class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        
        // Sort the numbers to start with the lexicographically smallest permutation
        sort(nums.begin(), nums.end());
        
        // Generate permutations using next_permutation
        do {
            ans.push_back(nums);
        } while (next_permutation(nums.begin(), nums.end()));
        
        return ans;
    }
};