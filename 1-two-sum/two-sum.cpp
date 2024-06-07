class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // brute force tech.


        // int n = nums.size();
        // for(int i =0;i <n-1;i++){
        //     for(int j = i+1; j<n;j++){
        //         if(nums[i] + nums[j] == target){
        //             return {i,j};
        //         }
        //     }
        // }
        // return {};



        //better approach, hashing.

        // map<int, int> mpp;
        // int n = nums.size();
        // for(int i=0;i<n;i++){
        //     int num = nums[i];
        //     int moreNeed = target - num;
        //     if(mpp.find(moreNeed) != mpp.end()){
        //         return {mpp[moreNeed],i};
        //     }
        //     mpp[num] = i;
        // }

        // return {-1,-1};




        //optimal
        //optimal sol in two pointer,
        //first sort it
        //then take one pointer to left, and one to the right.
        //phir just add and compare to target
        //if sum < target{increment left}
        //else{decrement right};

        int n = nums.size();
        int low = 0;
        int high = n-1;
        vector<pair<int,int>> indexedNums;

        for (int i = 0; i < n; ++i) {
            indexedNums.push_back({nums[i], i});
        }

        sort(indexedNums.begin(),indexedNums.end());
        while(low<high){
            int sum = indexedNums[low].first + indexedNums[high].first;
            if(sum == target){
                return {indexedNums[low].second,indexedNums[high].second};
            }
            else if(sum< target){
                low++;
            }
            else{
                high--;
            }
        }
        return {-1,-1};


    }
};