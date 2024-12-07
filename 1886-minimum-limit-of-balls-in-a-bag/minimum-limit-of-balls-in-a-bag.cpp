class Solution {
public:
    bool ifPossible(int mid,vector<int>& nums, int maxOperations){
        int totalOps = 0;
        //find kitne operations lag rahe hai to reduce it;
        for(int& num : nums){
            int ops = num/mid;
            if(num % mid == 0){
                ops -= 1;
            }
            totalOps += ops;
        }
        if(totalOps > maxOperations){
            return false;
        }
        return true;

    }
    int minimumSize(vector<int>& nums, int maxOperations) {
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        int result;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(ifPossible(mid,nums,maxOperations)){
                result = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return result; 
    }
};