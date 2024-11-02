class Solution {
public:
    string makeFancyString(string s) {
        int cnt = 1;
        int n = s.length();
        string result;
        for(int i=0;i<n;i++){
            result.push_back(s[i]);
            if(i>0 &&  s[i] == s[i-1]){
                cnt++;
            }
            else{
                cnt = 1;
            }

            if(cnt > 2){
                result.pop_back();
            }
        }
        return result;
    }
};