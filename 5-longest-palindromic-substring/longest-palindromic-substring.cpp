class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        string ans = "";
        int length = 0;
        
        for(int i=0;i<s.length();i++){

            //odd palindrome
            int left = i;
            int right = i;
            while(left>=0 && right < n && s[left] == s[right]){
                if(right - left + 1 > length){
                    ans = s.substr(left,right-left+1);
                    length = right - left + 1;
                }
                
                left -= 1;
                right += 1;
            }

            //even palindrome
            left = i;
            right = i+1;
            while(left>=0 && right < n && s[left] == s[right]){
                if(right - left + 1 > length){
                    ans = s.substr(left,right-left+1);
                    length = right - left + 1;
                }
                
                left -= 1;
                right += 1;
            }
        }

        return ans;
    }
};