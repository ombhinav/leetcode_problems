class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<char> st;
        int cnt = 0;
        for(auto it: jewels){
            st.insert(it);
        }
        for(int i=0;i<stones.size();i++){
            if(st.find(stones[i]) != st.end()){
                cnt++;
            }
        }
        return cnt;
    }
};