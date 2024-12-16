class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int i=0;i<k;i++){
        int min_el = *min_element(nums.begin(),nums.end());
        
            for(int i=0;i<nums.size();i++){
                if(nums[i] == min_el){
                    nums[i] *= multiplier;
                    break;
                }
            }
        }
        return nums;
    }
};