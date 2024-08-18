class Solution {
public:
    string reverseVowels(string s) {
        string vowels ="aeiouAEIOU";
        int n = s.size();
        int left = 0;
        int right = n-1;
        while(left < right){
            while(left < right && vowels.find(s[left]) == string::npos){
                left++;
            }
            while(left < right && vowels.find(s[right]) == string::npos){
                right--;
            }
            if(left < right){
                swap(s[left],s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};