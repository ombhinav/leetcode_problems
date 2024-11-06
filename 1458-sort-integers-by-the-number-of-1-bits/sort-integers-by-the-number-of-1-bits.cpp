class Solution {
public:

    int countSetBit(int n){
        int cnt = 0;
        while(n){
            if(n & 1){
                cnt++;
            }
            n = n >> 1;
        }
        return cnt;
    }
    vector<int> sortByBits(vector<int>& arr) {
       vector<pair<int,int>> v;
       for(auto it: arr){
            int bit = countSetBit(it);
            v.push_back({bit,it});
       }
       sort(v.begin(),v.end());
       vector<int> ans;
       for(auto it: v){
        ans.push_back(it.second);
       }
       return ans;

    }
};