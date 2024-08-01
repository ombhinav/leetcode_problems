class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt = 0;
        int r;
        for(auto d: details){
            string str1 =d.substr(11, 2);
            r = stoi(str1);
            if(r>60){
                cnt++;
            }
        }
        return cnt;
        
    }
};