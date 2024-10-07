class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    //   int n = nums.size();
    //   int maxi = INT_MIN;
    //   int sum = 0;
    //   for(int i=0;i<n;i++){
    //     sum += nums[i];
    //     if(sum>maxi){
    //         maxi = sum;
    //     }
    //     if(sum<0){
    //         sum = 0;
    //     }
    //   }
    //   return maxi;

        //for printing the maximum subarray itself

        // int n = nums.size();
        // int maxi = INT_MIN;
        // int sum = 0;

        // int ansStart = -1;
        // int ansEnd = -1;
        // int start = 0;

        // for(int i=0;i<n;i++){

        
        // if(sum == 0){
        //     start = i;
        // }

        // sum += nums[i];
        // if(sum>maxi){
        //     maxi = sum;
        //     ansStart = start;
        //     ansEnd = i;
        // }

        // if(sum<0){
        //     sum = 0;
        // }

        // }
        // cout<<ansStart;
        // cout<<ansEnd;
        // return maxi;


        int sum = 0;
        int maxi = INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            if(sum > maxi){
                maxi = sum;
            }
            if(sum < 0){
                sum = 0;
            }
        }
        return maxi;
    }
};