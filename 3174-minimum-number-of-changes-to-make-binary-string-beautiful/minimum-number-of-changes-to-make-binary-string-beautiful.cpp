class Solution {
public:
    int minChanges(string s) {
        // int change = 0;
        // for(int i=0;i<s.length();i+=2){
        //     if(s[i] != s[i+1]){
        //         change++;
        //     }
        // }
        // return change;
        int change = 0;
        char ch = s[0];
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i] == ch){
                count++;
                continue;
            }

            if(count % 2 == 0){
                count = 1;
            }
            else{
                change += 1;
                count = 0;
            }
            ch = s[i];
        }
        return change;
    }
};