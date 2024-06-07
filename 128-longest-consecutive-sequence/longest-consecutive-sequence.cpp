class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //better

        // sort(nums.begin(),nums.end());
        // int n = nums.size();
        // int lastElement = INT_MIN;
        // int cnt = 0;
        // int longest = 0;
        // for(int i=0;i<n;i++){
        //     if(nums[i]-1 == lastElement){
        //         cnt++;
        //         lastElement = nums[i];
        //     }
        //     else if(nums[i] != lastElement){
        //         lastElement = nums[i];
        //         cnt = 1;
        //     }
        //     longest = max(longest,cnt);
        // }
        // return longest;

        //optimal

        
        int longest = 1;
        
        unordered_set<int> set;
        int n = nums.size();
        if(n==0){return 0;}
        for(int i=0;i<n;i++){
            set.insert(nums[i]);
        }
        for(auto it: set){
            if(set.find(it-1) == set.end()){
                int cnt = 1;
                int x = it;
                while(set.find(x+1) != set.end() ){
                    x = x+1;
                    cnt++;
                }
            longest = max(cnt, longest);
            }
        }
        return longest ;
    }
};