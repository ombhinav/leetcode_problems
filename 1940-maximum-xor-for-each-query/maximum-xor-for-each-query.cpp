class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n = nums.size();
        int XOR = 0;
        vector<int> result(n);
        for(int i=0;i<nums.size();i++){
            XOR ^= nums[i];
        }

        // now we have to flip
        // easy way to get power of 2
        // (1 << power)
        int mask = (1 << maximumBit) - 1;
        for(int i=0;i<nums.size();i++){
            int k = XOR ^ mask;
            result[i] = k;
            XOR = (XOR ^ nums[n-1-i]);
        }
        return result;


    }
};