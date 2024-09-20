class Solution {
public:
    int minPartitions(string n) {
        int ans = 0;
        for(auto ch: n){
            int num = ch - '0';
            ans = max(ans,num);
        }
        return ans;
    }
};