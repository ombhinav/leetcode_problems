class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int maxcombi = 0;
        for(int bitpos=0; bitpos<32; bitpos++){
            int count = 0;
            for(auto num: candidates){
                if((num & (1 << bitpos)) != 0){
                    //if not equal to 0, then its a set bit
                    count++;
                }
            }
            maxcombi = max(maxcombi,count);

        }
        return maxcombi;
    }
};