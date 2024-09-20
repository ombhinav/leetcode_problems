class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n = strs.size();
        int a = strs[0].length();
        int b = strs[n-1].length();
        int i = 0;
        int cnt = 0;
        while(i<a && i<b){
            if(strs[0][i] == strs[n-1][i]){
                cnt++;
            }
            else{
                break;
            }
            i++;
        }
        string s = strs[0].substr(0,cnt);
        return s;
    }
};