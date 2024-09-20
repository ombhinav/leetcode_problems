class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int pos[26] = {};
        int res = 0;
        for(int i =0;i<t.size();i++){
            pos[t[i] - 'a'] = i;
        }
        for(int i=0;i<s.size();i++){
            res += abs(i - pos[s[i] - 'a']);
        }
        return res;
        
    }
};