class Solution {
public:
    bool rotateString(string s, string goal) {
        if(goal.length() != s.length()){
            return false;
        }
        string temp = s+s;
        auto found = temp.find(goal);
        if(found != string :: npos){
            return true;
        }
        return false;
    }
};