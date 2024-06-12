class Solution {
public:
    void sortColors(vector<int>& nums) {
        // int cnt0 = 0, cnt1 = 0, cnt2 = 0;
        // for (int i = 0; i < nums.size(); i++) {
        //     if (nums[i] == 0) {
        //         cnt0++;
        //     }
        //     if (nums[i] == 1) {
        //         cnt1++;
        //     }
        //     if (nums[i] == 2) {
        //         cnt2++;
        //     }
        // }
        // cout << cnt1;
        // for (int i = 0; i < cnt0; i++) {
        //     nums[i] = 0;
        // }
        // for (int i = cnt0; i < cnt1 + cnt0; i++) {
        //     nums[i] = 1;
        // }
        // for (int i = cnt1 + cnt0; i < cnt2 + cnt1 + cnt0; i++) {
        //     nums[i] = 2;
        // }



        // //hashing
        // vector<int>hash(3,0);
        // for(int i=0;i<nums.size();i++){
        //    hash[nums[i]]++;
        // }
        // for(int j=0;j<hash[0];j++){
        //     nums[j]=0;
        // }
        // for(int k=hash[0];k<(hash[0]+hash[1]);k++){
        //     nums[k]=1;
        // }
        // for(int l=hash[0]+hash[1];l<nums.size();l++){
        //     nums[l]=2;
        // }



        //Dutch National Flag ALgorithm
        int n = nums.size();
        int low = 0, mid = 0, high = n-1;
        while(mid<=high){
            if(nums[mid] == 0){
                swap(nums[mid], nums[low]);
                mid++;
                low++;
            }
            else if(nums[mid] == 1){
                mid ++;
            }
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
        
    }
};