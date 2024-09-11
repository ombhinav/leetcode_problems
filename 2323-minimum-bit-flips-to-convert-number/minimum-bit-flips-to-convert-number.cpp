class Solution {
public:
    int minBitFlips(int start, int goal) {
        int differ = start ^ goal;
        int ans = 0;
        while(differ > 0){
            ans += differ & 1;
            differ>>= 1;
        }
        return ans;
    }
};