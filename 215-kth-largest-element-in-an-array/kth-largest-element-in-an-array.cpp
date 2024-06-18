class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // sort(nums.begin(),nums.end());
        // reverse(nums.begin(),nums.end());
        // return nums[k-1];

        //priority queue
        priority_queue<int>pt_queue;
        for(int i=0;i<nums.size();i++){
            pt_queue.push(nums[i]);
        }
        for(int i=0;i<k-1;i++){
            pt_queue.pop();
        }
        return pt_queue.top();
    }
};