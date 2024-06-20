class Solution {
public:

    void func(int ind, vector<int>&nums,vector<int> output, vector<vector<int>>&ans,int n){
        if(ind == n){
            ans.push_back(output);
            return;
        }
        output.push_back(nums[ind]);
        func(ind+1,nums,output,ans,n);
        output.pop_back();
        func(ind+1,nums,output,ans,n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;
        vector<int> output;
        func(0,nums,output,ans,n);
        return ans;
    }
};