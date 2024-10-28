class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        // unordered_map<int,int> mpp;
        // sort(nums.begin(),nums.end());
        // int maxStreak = 0;
        // for(auto num: nums){
        //     //to check if the no. is a perfect square or not
        //     int root = (int)sqrt(num);
        //     if(root*root == num && mpp.find(root) != mpp.end()){
        //         mpp[num] = mpp[root]+1;

        //     }
        //     else{
        //         mpp[num] = 1;
        //     }
        //     maxStreak = max(maxStreak,mpp[num]);
        // }
        // return maxStreak < 2 ? -1 : maxStreak;


    
        unordered_set<int>st(nums.begin(),nums.end());
        int maxStreak = 0;
        // unordered_set<int>st;

        // for(auto num: nums){
        //     st.insert(num);
        // }
        for(int &num: nums){

            int streak = 0;
            long long cur = num;
            while(st.find(cur) != st.end()){
                streak++;
                if(cur*cur > 1e5){
                    break;
                }
                cur = cur*cur;
            }
            maxStreak = max(maxStreak, streak);
        }
        return maxStreak < 2 ? -1 : maxStreak; 
    }
};