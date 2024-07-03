class Solution {
public:
    int minDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();

        int minVal = INT_MAX;
        if(n<5){
            return 0;
        }
        minVal = min(minVal,nums[n-4]- nums[0]); // 3 right vale change kardiye
        minVal = min(minVal, nums[n-1] - nums[3]); // 3 left vale change kardiye
        minVal = min(minVal, nums[n-2]- nums[2]); // 1 right se, 2 left se
        minVal = min(minVal, nums[n-3]- nums[1]); // 2 right se, 1 left se

        return minVal;
        
    }
};