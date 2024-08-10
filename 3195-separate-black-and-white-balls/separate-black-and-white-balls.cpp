class Solution {
public:
    long long minimumSteps(string s) {
        int n = s.size();
        int left =0;
        int right = n-1;
        long long cnt = 0;
        while(left<right){
            while(left < n && s[left] == '0' ){
                left++;
            }
            while(right >0 && s[right] == '1' ){
                right--;
            }
            if(left>right){
                break;
            }
            cout<<left<<" "<<right<<" ";
            cnt += (right-left);
            left++;
            right--;
        }
        return cnt;



    }
};