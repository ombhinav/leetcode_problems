class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i =0;
        string result ="";
        while(i<n){
            while(i<n && s[i]==' '){
                i++;
            }
            if(i>=n){
                break;
            }
            int j = i+1;
            while(j<n && s[j] != ' '){
                j++;
            }
            string word = s.substr(i,j-i);
            if(result.length()==0){
                result = word;
            }
            else{
                result = word+" "+result;
            }
            i = j +1;
        }
        return result;
    }
};