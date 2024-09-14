class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        // int maxValue = *max_element(nums.begin(),nums.end());
        // int size = 1;
        // for(int i=0;i<nums.size();i++){
        //     int andResult = nums[i];
        //     for(int j=i+1;j<nums.size();j++){
        //         andResult = andResult & nums[j];
        //         if(andResult == maxValue){
        //            size = max(size,j-i+1); 
        //         }
        //     }
        // }
        // return size;

        //observational approach
        int len = 1;
        int mx = *max_element(nums.begin(),nums.end());
        int temp_len = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == mx){
                temp_len++;
            }
            else{
                len = max(temp_len,len);
                temp_len = 0;
            }
        }
        return max(temp_len, len);
    }
};