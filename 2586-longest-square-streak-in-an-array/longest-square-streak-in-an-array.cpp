class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        unordered_map<int,int> mpp;
        sort(nums.begin(),nums.end());
        int maxStreak = 0;
        for(auto num: nums){
            //to check if the no. is a perfect square or not
            int root = (int)sqrt(num);
            if(root*root == num && mpp.find(root) != mpp.end()){
                mpp[num] = mpp[root]+1;

            }
            else{
                mpp[num] = 1;
            }
            maxStreak = max(maxStreak,mpp[num]);
        }
        return maxStreak < 2 ? -1 : maxStreak;
    }
};