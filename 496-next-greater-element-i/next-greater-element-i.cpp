class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            int a = nums1[i];
            int b = 0;
            int maxi = INT_MIN;
            bool found = false;
            for(int j=0;j<nums2.size();j++){
                if(a==nums2[j]){
                    b = j;
                    break;
                }
            }
            for(int k = b+1;k<nums2.size();k++){
                maxi = max(nums2[b],nums2[k]);
                if(maxi > nums1[i]){
                    ans.push_back(maxi);
                    found = true;
                    break;
                }
            }
            if(!found){
            ans.push_back(-1);
            }
            
        }

        return ans;
    }
};