class Solution {
public:
    bool canSortArray(vector<int>& nums) {

        vector<int>original(nums);
        sort(original.begin(),original.end());

        int n = __builtin_popcount(8);
        for(int i=0;i<100;i++){

            for(int i=0;i<nums.size()-1;i++){
                if(__builtin_popcount(nums[i]) == __builtin_popcount(nums[i+1])){
                    if(nums[i] > nums[i+1]){
                        swap(nums[i],nums[i+1]);
                    }
                }
            }
        }
        return nums == original;
    }
};